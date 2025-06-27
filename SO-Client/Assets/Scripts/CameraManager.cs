using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;

public class CameraManager : MonoBehaviour
{
    private Vector3 dragOrigin;
    private bool isDragging = false;
    private bool isMouseDownOnClickableObject = false;
    private float dragThreshold = 10f;

    public Vector2 gridMin;
    public Vector2 gridMax;

    //set in inspector
    public float boundaryOffset; 
    public float snapBackSpeed;
    public float softBoundaryPadding;
    public float snapBackRelaxFactor; 

    public bool isMenuDisplayed = false;
    public float menuWidth;
    private bool isSnappingBack = false;
    private Vector3 snapBackTarget;
    private static Camera cam;
    public GameMaster gameMaster;

    private bool wasTouchingLastFrame = false;

    public Transform camTransform;
    public float followLerpSpeed = 5f;

    private Transform followTarget;

    private void Start()
    {
        cam = Camera.main;
        gridMin = new Vector2(-1, -1);
        gridMax = new Vector2(gameMaster.gridX + 1, gameMaster.gridY + 1);
        menuWidth = gameMaster.choicePanel.GetComponent<RectTransform>().rect.width * cam.orthographicSize * 2 / Screen.height;
    }

    public bool IsDragging() => isDragging;

    void Update()
    {
        if((GameMaster.CPU_isOn && GameMaster.CPU_PlayersList[GameMaster.playerTurn] && !GameMaster.isGameComplete))
        {
            return; // Do not allow camera movement during CPU turns unless game is over.
        }
        Vector2 inputPosition;
        bool isPressing = false;
        bool isPressed = false;
        bool isReleased = false;
        

        // Handle both mouse and touch input
        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.isPressed)// && !wasTouchingLastFrame)
        {
            inputPosition = Touchscreen.current.primaryTouch.position.ReadValue();
            isPressing = true;
            isPressed = Touchscreen.current.primaryTouch.press.wasPressedThisFrame;
            //isReleased = Touchscreen.current.primaryTouch.press.wasReleasedThisFrame;
            wasTouchingLastFrame = true;
            //Debug.Log($"touchscreen touched!");
        }else if (wasTouchingLastFrame)
        {
            inputPosition = Touchscreen.current.primaryTouch.position.ReadValue();
            isReleased = true;
            //Debug.Log($"touchscreen touched! Was it released this frame? {isReleased}");
            wasTouchingLastFrame = false;
        }
        else if (Mouse.current != null)
        {
            inputPosition = Mouse.current.position.ReadValue();
            isPressing = Mouse.current.leftButton.isPressed;
            isPressed = Mouse.current.leftButton.wasPressedThisFrame;
            isReleased = Mouse.current.leftButton.wasReleasedThisFrame;
        }
        else
        {
            return;
        }

        // Detect UI elements properly on mobile
        if (isPressed)
        {
            if (EventSystem.current.IsPointerOverGameObject() || IsPointerOverUI(inputPosition))
            {
                isMouseDownOnClickableObject = true;
                //Debug.Log("clickable element clicked!");
                return;
            }

            isMouseDownOnClickableObject = IsPointerOverClickableObject(inputPosition) && isDragging;
            dragOrigin = inputPosition;
            isDragging = false;
            isSnappingBack = false;
        }

        if (isPressing)
        {
            if (isMouseDownOnClickableObject) return;

            if (!isDragging && Vector3.Distance(dragOrigin, inputPosition) > dragThreshold)
            {
                isDragging = true;
            }

            if (isDragging)
            {
                Vector3 direction = cam.ScreenToWorldPoint(dragOrigin) - cam.ScreenToWorldPoint(inputPosition);
                direction.z = 0;
                cam.transform.position += direction;
                dragOrigin = inputPosition;
                ApplyCameraBounds();
            }
        }

        if (isReleased)
        {
            //Debug.Log($"mouse released!, dragging = {isDragging}, isMouseDown? {isMouseDownOnClickableObject}");
            if (!isDragging && !isMouseDownOnClickableObject)
            {
                ClickableObject clickableObject = GetClickableObjectUnderPointer(inputPosition);
                if (clickableObject != null)
                {
                    HandleObjectClick(clickableObject);
                }
/*                else
                {
                    Debug.LogWarning("clickable object under pointer is null");
                }*/
            }

            isDragging = false;
            isMouseDownOnClickableObject = false;
            StartSnapBack();
        }

        if (isSnappingBack)
        {
            cam.transform.position = Vector3.Lerp(cam.transform.position, snapBackTarget, snapBackSpeed * Time.deltaTime);
            if (Vector3.Distance(cam.transform.position, snapBackTarget) < 0.01f)
            {
                cam.transform.position = snapBackTarget;
                isSnappingBack = false;
            }
        }
    }

    public void SetPosition(Vector2 targetPos)
    {
        float duration = 0.3f;
        StartCoroutine(SmoothMoveTo(targetPos, duration));
    }

    /*    private IEnumerator SmoothMoveTo(Vector2 targetPos, float duration)
        {
            Vector3 startPos = cam.transform.position;
            Vector3 endPos = new Vector3(targetPos.x, targetPos.y, startPos.z);
            float elapsed = 0f;

            while (elapsed < duration)
            {
                elapsed += Time.deltaTime;
                float t = Mathf.SmoothStep(0f, 1f, elapsed / duration);
                cam.transform.position = Vector3.Lerp(startPos, endPos, t);
                yield return null;
            }

            cam.transform.position = endPos;
        }*/

    private IEnumerator SmoothMoveTo(Vector2 targetPos, float duration)
    {
        Vector3 startPos = cam.transform.position;
        Vector3 endPos = new Vector3(targetPos.x, targetPos.y, startPos.z);
        float elapsed = 0f;

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float t = elapsed / duration;
            // Ease in/out using a sine function
            float curvedT = 0.5f * (1 - Mathf.Cos(t * Mathf.PI));
            cam.transform.position = Vector3.Lerp(startPos, endPos, curvedT);
            yield return null;
        }

        cam.transform.position = endPos;
    }



    private void ApplyCameraBounds()
    {
        Vector3 clampedPosition = cam.transform.position;
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;
        isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;
        float rightBoundaryOffset = isMenuDisplayed ? boundaryOffset + menuWidth : boundaryOffset;

        clampedPosition.x = Mathf.Clamp(
            clampedPosition.x,
            gridMin.x + camWidth - boundaryOffset - softBoundaryPadding,
            gridMax.x - camWidth + rightBoundaryOffset + softBoundaryPadding
        );

        clampedPosition.y = Mathf.Clamp(
            clampedPosition.y,
            gridMin.y + camHeight - boundaryOffset - softBoundaryPadding,
            gridMax.y - camHeight + boundaryOffset + softBoundaryPadding
        );

        cam.transform.position = clampedPosition;
    }

    /*[SerializeField] public float minVisiblePadding = 2f; // how much of the grid must always remain visible

    private void ApplyCameraBounds()
    {
        Vector3 clampedPosition = cam.transform.position;
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;

        isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;
        float rightBoundaryOffset = isMenuDisplayed ? boundaryOffset + menuWidth : boundaryOffset;

        // Center of the grid
        float centerX = (gridMin.x + gridMax.x) / 2f;
        float centerY = (gridMin.y + gridMax.y) / 2f;

        // Half-size of the grid
        float halfGridWidth = (gridMax.x - gridMin.x) / 2f;
        float halfGridHeight = (gridMax.y - gridMin.y) / 2f;

        // How far the camera can move away from the center
        float maxXOffset = Mathf.Max(0, halfGridWidth - camWidth + minVisiblePadding);
        float maxYOffset = Mathf.Max(0, halfGridHeight - camHeight + minVisiblePadding);

        // Clamp camera within those bounds
        clampedPosition.x = Mathf.Clamp(clampedPosition.x, centerX - maxXOffset, centerX + maxXOffset);
        clampedPosition.y = Mathf.Clamp(clampedPosition.y, centerY - maxYOffset, centerY + maxYOffset);

        cam.transform.position = clampedPosition;
    }*/

    /*private void StartSnapBack()
    {
        snapBackTarget = cam.transform.position;
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;
        isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;
        float rightBoundaryOffset = isMenuDisplayed ? menuWidth : 0f;


        snapBackTarget.x = Mathf.Clamp(
            snapBackTarget.x,
            gridMin.x + camWidth - snapBackRelaxFactor,
            gridMax.x - camWidth + rightBoundaryOffset + snapBackRelaxFactor);

        snapBackTarget.y = Mathf.Clamp(
            snapBackTarget.y,
            gridMin.y + camHeight - snapBackRelaxFactor,
            gridMax.y - camHeight + snapBackRelaxFactor);

        isSnappingBack = true;
    }*/

    private void StartSnapBack()
    {
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;

        isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;
        float rawMenuWidth = gameMaster.choicePanel.GetComponent<RectTransform>().rect.width;
        float screenUnitsPerPixel = cam.orthographicSize * 2 / Screen.height;
        float menuWidthWorldUnits = rawMenuWidth * screenUnitsPerPixel;

        // Cap the right offset to at most half the camera width
        float maxRightOffset = camWidth;
        float rightBoundaryOffset = isMenuDisplayed
            ? Mathf.Min(menuWidthWorldUnits, maxRightOffset)
            : 0f;

        // Grid dimensions
        float gridWidth = gridMax.x - gridMin.x;
        float gridHeight = gridMax.y - gridMin.y;

        // Safety margins to ensure a portion of the grid is always visible
        float minVisibleY = 1f; // minimum grid height (in world units) to remain onscreen
        //float minVisibleX = 1f;

        // Relaxed overscroll values
        float xRelax = Mathf.Clamp(snapBackRelaxFactor, 0f, gridWidth / 2f);
        float yRelax = Mathf.Clamp(snapBackRelaxFactor, 0f, gridHeight / 2f);

        // Compute clamped bounds
        float minX = gridMin.x + camWidth + rightBoundaryOffset *2 - xRelax;
        float maxX = gridMax.x - camWidth + rightBoundaryOffset /2  + xRelax;

        // THIS IS THE KEY FIX:
        float minY = gridMin.y + minVisibleY;
        float maxY = gridMax.y - minVisibleY;

        float centerY = Mathf.Clamp(cam.transform.position.y, minY, maxY);

        // If camera is larger than the grid, allow small padding
        if (gridHeight <= 2 * camHeight)
        {
            float buffer = Mathf.Clamp(yRelax, 0, camHeight - minVisibleY);
            minY = gridMin.y - buffer;
            maxY = gridMax.y + buffer;
            centerY = Mathf.Clamp(cam.transform.position.y, minY, maxY);
        }

        snapBackTarget = new Vector3(
            Mathf.Clamp(cam.transform.position.x, minX, maxX),
            centerY,
            cam.transform.position.z
        );

        isSnappingBack = true;
    }









    private bool IsPointerOverClickableObject(Vector2 position)
    {
       
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(position), Vector2.zero);
/*        if (hit.collider == null)
            Debug.LogWarning("hit collider is null");*/
        return hit.collider != null && hit.collider.GetComponent<ClickableObject>() != null;
    }

    private ClickableObject GetClickableObjectUnderPointer(Vector2 position)
    {
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(position), Vector2.zero);
        return hit.collider != null ? hit.collider.GetComponent<ClickableObject>() : null;
    }

    private void HandleObjectClick(ClickableObject clickableObject)
    {
        clickableObject.HandleClick();
        Vector3 objectPosition = clickableObject.transform.position;
        float menuWidthInWorldUnits = gameMaster.choicePanel.GetComponent<RectTransform>().rect.width * cam.orthographicSize * 2 / Screen.height;
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;
        float rightEdgeOfCamera = cam.transform.position.x + camWidth;
        isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;

        if (objectPosition.x > rightEdgeOfCamera - menuWidthInWorldUnits && isMenuDisplayed)
        {
            float targetX = objectPosition.x + menuWidthInWorldUnits - camWidth;
            cam.transform.position = new Vector3(targetX, cam.transform.position.y, cam.transform.position.z);
        }
    }

    private bool IsPointerOverUI(Vector2 position)
    {
        PointerEventData eventData = new PointerEventData(EventSystem.current) { position = position };
        var results = new System.Collections.Generic.List<RaycastResult>();
        EventSystem.current.RaycastAll(eventData, results);
        return results.Count > 0;
    }

    public void SnapCameraToUnitCluster(int playerTurn)
    {
        List<BaseUnit> units = MasterGrid.playerUnits[playerTurn];
        if (units == null || units.Count == 0) return;

        const float clusterRadius = 5f; // How far to search for nearby units
        Vector2 bestCenter = Vector2.zero;
        int maxCount = 0;

        foreach (BaseUnit unit in units)
        {
            if (unit == null) continue;

            Vector2 center = unit.transform.position;
            int count = 0;

            foreach (BaseUnit other in units)
            {
                if (other == null) continue;
                if (Vector2.Distance(center, other.transform.position) <= clusterRadius)
                    count++;
            }

            if (count > maxCount)
            {
                maxCount = count;
                bestCenter = center;
            }
        }

        SetPosition(bestCenter);
    }




    public void SetFollowTarget(Transform target)
    {
        followTarget = target;
    }

    public void ClearFollowTarget()
    {
        followTarget = null;
    }

    private void LateUpdate()
    {
        if (followTarget != null)
        {
            Vector3 targetPos = new Vector3(followTarget.position.x, followTarget.position.y, camTransform.position.z);
            camTransform.position = Vector3.Lerp(camTransform.position, targetPos, followLerpSpeed * Time.deltaTime);
        }
    }
}