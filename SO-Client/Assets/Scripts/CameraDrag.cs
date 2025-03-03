using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;

public class CameraDrag : MonoBehaviour
{
    private Vector3 dragOrigin;
    private bool isDragging = false;
    private bool isMouseDownOnClickableObject = false;
    private float dragThreshold = 10f;

    public Vector2 gridMin;
    public Vector2 gridMax;
    public float boundaryOffset = 5f;
    public float snapBackSpeed = 5f;
    public bool isMenuDisplayed = false;
    public float menuWidth;
    private bool isSnappingBack = false;
    private Vector3 snapBackTarget;
    private Camera cam;
    public GameMaster gameMaster;

    private bool wasTouchingLastFrame = false;

    private void Start()
    {
        cam = Camera.main;
        gridMin = new Vector2(-1, -3);
        gridMax = new Vector2(gameMaster.gridX + 1, gameMaster.gridY + 1);
        menuWidth = gameMaster.choicePanel.GetComponent<RectTransform>().rect.width * cam.orthographicSize * 2 / Screen.height;
    }

    public bool IsDragging() => isDragging;

    void Update()
    {
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
                else
                {
                    Debug.LogWarning("clickable object under pointer is null");
                }
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

    private void ApplyCameraBounds()
    {
        Vector3 clampedPosition = cam.transform.position;
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;
        isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;
        float rightBoundaryOffset = isMenuDisplayed ? boundaryOffset + menuWidth : boundaryOffset;

        clampedPosition.x = Mathf.Clamp(clampedPosition.x, gridMin.x + camWidth - boundaryOffset, gridMax.x - camWidth + rightBoundaryOffset);
        clampedPosition.y = Mathf.Clamp(clampedPosition.y, gridMin.y + camHeight - boundaryOffset, gridMax.y - camHeight + boundaryOffset);
        cam.transform.position = clampedPosition;
    }

    private void StartSnapBack()
    {
        snapBackTarget = cam.transform.position;
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;
        isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;
        float rightBoundaryOffset = isMenuDisplayed ? menuWidth : 0f;

        snapBackTarget.x = Mathf.Clamp(snapBackTarget.x, gridMin.x + camWidth, gridMax.x - camWidth + rightBoundaryOffset);
        snapBackTarget.y = Mathf.Clamp(snapBackTarget.y, gridMin.y + camHeight, gridMax.y - camHeight);
        isSnappingBack = true;
    }

    private bool IsPointerOverClickableObject(Vector2 position)
    {
       
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(position), Vector2.zero);
        if (hit.collider == null)
            Debug.LogWarning("hit collider is null");
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
}


/*
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;

public class CameraDrag : MonoBehaviour
{
    private Vector3 dragOrigin;
    private bool isDragging = false;
    public bool isMouseDownOnClickableObject = false;
    private float dragThreshold = 10f;

    public Vector2 gridMin;
    public Vector2 gridMax;
    public float boundaryOffset = 5f;
    public float snapBackSpeed = 5f;

    public bool isMenuDisplayed = false;
    public float menuWidth;

    private bool isSnappingBack = false;
    private Vector3 snapBackTarget;

    private Camera cam;
    public GameMaster gameMaster;

    private void Start()
    {
        cam = Camera.main;
        gridMin = new Vector2(-1, -3);
        gridMax = new Vector2(gameMaster.gridX + 1, gameMaster.gridY + 1);
        menuWidth = gameMaster.choicePanel.GetComponent<RectTransform>().rect.width * cam.orthographicSize * 2 / Screen.height;
    }

    public bool IsDragging() => isDragging;

    void Update()
    {
        Vector3 currentInputPosition = GetInputPosition();
        bool isInputDown = IsInputDown();
        bool isInputHeld = IsInputHeld();
        bool isInputReleased = IsInputReleased();

        if (isInputDown)
        {
            if (EventSystem.current != null && EventSystem.current.IsPointerOverGameObject())
            {
                isMouseDownOnClickableObject = true;
                return;
            }
            isMouseDownOnClickableObject = IsPointerOverClickableObject() && isDragging;
            dragOrigin = currentInputPosition;
            isDragging = false;
            isSnappingBack = false;
        }

        if (isInputHeld)
        {
            if (isMouseDownOnClickableObject) return;
            if (!isDragging && Vector3.Distance(dragOrigin, currentInputPosition) > dragThreshold)
                isDragging = true;
            if (isDragging)
            {
                Vector3 direction = cam.ScreenToWorldPoint(dragOrigin) - cam.ScreenToWorldPoint(currentInputPosition);
                direction.z = 0;
                cam.transform.position += direction;
                dragOrigin = currentInputPosition;
                ClampCameraPosition();
            }
        }

        if (isInputReleased)
        {
            if (!isDragging && !isMouseDownOnClickableObject)
            {
                ClickableObject clickableObject = GetClickableObjectUnderPointer();
                if (clickableObject != null)
                    HandleObjectClick(clickableObject);
            }
            isDragging = false;
            isMouseDownOnClickableObject = false;
            SetSnapBackTarget();
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

    private Vector3 GetInputPosition()
    {
        if (Mouse.current != null)
            return Mouse.current.position.ReadValue();
        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.isPressed)
            return Touchscreen.current.primaryTouch.position.ReadValue();
        return Vector3.zero;
    }

    private bool IsInputDown()
    {
        return (Mouse.current != null && Mouse.current.leftButton.wasPressedThisFrame) ||
               (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.wasPressedThisFrame);
    }

    private bool IsInputHeld()
    {
        return (Mouse.current != null && Mouse.current.leftButton.isPressed) ||
               (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.isPressed);
    }

    private bool IsInputReleased()
    {
        return (Mouse.current != null && Mouse.current.leftButton.wasReleasedThisFrame) ||
               (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.wasReleasedThisFrame);
    }

    private void ClampCameraPosition()
    {
        Vector3 clampedPosition = cam.transform.position;
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;
        isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;
        float rightBoundaryOffset = isMenuDisplayed ? boundaryOffset + menuWidth : boundaryOffset;
        clampedPosition.x = Mathf.Clamp(clampedPosition.x, gridMin.x + camWidth - boundaryOffset, gridMax.x - camWidth + rightBoundaryOffset);
        clampedPosition.y = Mathf.Clamp(clampedPosition.y, gridMin.y + camHeight - boundaryOffset, gridMax.y - camHeight + boundaryOffset);
        cam.transform.position = clampedPosition;
    }

    private void SetSnapBackTarget()
    {
        snapBackTarget = cam.transform.position;
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;
        isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;
        float rightBoundaryOffset = isMenuDisplayed ? menuWidth : 0f;
        snapBackTarget.x = Mathf.Clamp(snapBackTarget.x, gridMin.x + camWidth, gridMax.x - camWidth + rightBoundaryOffset);
        snapBackTarget.y = Mathf.Clamp(snapBackTarget.y, gridMin.y + camHeight, gridMax.y - camHeight);
        isSnappingBack = true;
    }

    private bool IsPointerOverClickableObject()
    {
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(GetInputPosition()), Vector2.zero);
        return hit.collider != null && hit.collider.GetComponent<ClickableObject>() != null;
    }

    private ClickableObject GetClickableObjectUnderPointer()
    {
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(GetInputPosition()), Vector2.zero);
        return hit.collider != null ? hit.collider.GetComponent<ClickableObject>() : null;
    }

    private void HandleObjectClick(ClickableObject clickableObject)
    {
        clickableObject.HandleClick();
    }
}*/



//this chat implementation worked very well

/*using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using System.Collections.Generic;

public class CameraDrag : MonoBehaviour
{
    private Vector3 dragOrigin;
    private bool isDragging = false;
    private float dragThreshold = 10f;

    public Vector2 gridMin;
    public Vector2 gridMax;
    public float boundaryOffset = 10f;
    public float snapBackSpeed = 5f;

    public bool isMenuDisplayed = false;
    public float menuWidth;

    private bool isSnappingBack = false;
    private Vector3 snapBackTarget;
    private Camera cam;
    public GameMaster gameMaster;

    private void Start()
    {
        cam = Camera.main;
        gridMin = new Vector2(-1, -3);
        gridMax = new Vector2(gameMaster.gridX + 1, gameMaster.gridY + 1);
        menuWidth = gameMaster.choicePanel.GetComponent<RectTransform>().rect.width * cam.orthographicSize * 2 / Screen.height;
    }

    public bool IsDragging()
    {
        return isDragging;
    }

    void Update()
    {
        if (IsPointerOverUI()) return; // Block dragging/clicking if UI is touched

        if (Mouse.current.leftButton.wasPressedThisFrame || (Touchscreen.current?.primaryTouch.press.isPressed ?? false))
        {
            dragOrigin = GetInputPosition();
            isDragging = false;
            isSnappingBack = false;
        }

        if (Mouse.current.leftButton.isPressed || (Touchscreen.current?.primaryTouch.press.isPressed ?? false))
        {
            Vector2 currentPos = GetInputPosition();
            if (!isDragging && Vector2.Distance(dragOrigin, currentPos) > dragThreshold)
            {
                isDragging = true;
            }

            if (isDragging)
            {
                Vector3 direction = cam.ScreenToWorldPoint(dragOrigin) - cam.ScreenToWorldPoint(currentPos);
                direction.z = 0;
                cam.transform.position += direction;
                dragOrigin = currentPos;

                ApplyCameraBounds();
            }
        }

        if (Mouse.current.leftButton.wasReleasedThisFrame || (Touchscreen.current?.primaryTouch.press.wasReleasedThisFrame ?? false))
        {
            if (!isDragging) // Only process click if no dragging occurred
            {
                ClickableObject clickableObject = GetClickableObjectUnderPointer();
                if (clickableObject != null)
                {
                    HandleObjectClick(clickableObject);
                }
            }

            isDragging = false;
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

    private void ApplyCameraBounds()
    {
        Vector3 clampedPosition = cam.transform.position;
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;
        float rightBoundaryOffset = isMenuDisplayed ? boundaryOffset + menuWidth : boundaryOffset;

        clampedPosition.x = Mathf.Clamp(clampedPosition.x, gridMin.x + camWidth - boundaryOffset, gridMax.x - camWidth + rightBoundaryOffset);
        clampedPosition.y = Mathf.Clamp(clampedPosition.y, gridMin.y + camHeight - boundaryOffset, gridMax.y - camHeight + boundaryOffset);
        cam.transform.position = clampedPosition;
    }

    private void StartSnapBack()
    {
        snapBackTarget = cam.transform.position;
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;
        float rightBoundaryOffset = isMenuDisplayed ? menuWidth : 0f;

        snapBackTarget.x = Mathf.Clamp(snapBackTarget.x, gridMin.x + camWidth, gridMax.x - camWidth + rightBoundaryOffset);
        snapBackTarget.y = Mathf.Clamp(snapBackTarget.y, gridMin.y + camHeight, gridMax.y - camHeight);
        isSnappingBack = true;
    }

    private Vector2 GetInputPosition()
    {
        if (Touchscreen.current?.primaryTouch.press.isPressed ?? false)
        {
            return Touchscreen.current.primaryTouch.position.ReadValue();
        }
        return Mouse.current.position.ReadValue();
    }

    private bool IsPointerOverUI()
    {
        if (EventSystem.current == null) return false;
        PointerEventData eventData = new PointerEventData(EventSystem.current) { position = GetInputPosition() };
        List<RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(eventData, results);
        return results.Count > 0;
    }

    public ClickableObject GetClickableObjectUnderPointer()
    {
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(GetInputPosition()), Vector2.zero);
        return hit.collider != null ? hit.collider.GetComponent<ClickableObject>() : null;
    }

    private void HandleObjectClick(ClickableObject clickableObject)
    {
        clickableObject.HandleClick();

        Vector3 objectPosition = clickableObject.transform.position;
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;
        float rightEdgeOfCamera = cam.transform.position.x + camWidth;
        float menuWidthInWorldUnits = gameMaster.choicePanel.GetComponent<RectTransform>().rect.width * cam.orthographicSize * 2 / Screen.height;

        isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;

        if (objectPosition.x > rightEdgeOfCamera - menuWidthInWorldUnits && isMenuDisplayed)
        {
            float targetX = objectPosition.x + menuWidthInWorldUnits - camWidth;
            cam.transform.position = new Vector3(targetX, cam.transform.position.y, cam.transform.position.z);
        }
    }
}*/


//old implementation

/*
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;

public class CameraDrag : MonoBehaviour
{
    private Vector3 dragOrigin;
    private bool isDragging = false;
    public bool isMouseDownOnClickableObject = false;
    private float dragThreshold = 10f;

    public Vector2 gridMin; // Bottom-left corner of the grid
    public Vector2 gridMax; // Top-right corner of the grid
    public float boundaryOffset = 5f; // Allowable drag outside the grid before snapping back
    public float snapBackSpeed = 5f; // Speed of the snap-back

    public bool isMenuDisplayed = false; // Flag to check if the menu is displayed

    public float menuWidth; // Width of the menu in world units

    private bool isSnappingBack = false;
    private Vector3 snapBackTarget;

    private Camera cam;

    public GameMaster gameMaster;

    private void Start()
    {
        cam = Camera.main;

        //set the camera min and max
        gridMin = new Vector2(-1, -3);
        gridMax = new Vector2(gameMaster.gridX + 1, gameMaster.gridY + 1);

        //get the width of the rhs menu and set that to the allowable extra camera view on rhs when menu is open
        menuWidth = gameMaster.choicePanel.GetComponent<RectTransform>().rect.width * cam.orthographicSize * 2 / Screen.height;
    }

    public bool IsDragging()
    {
        return isDragging;
    }

    void Update()
    {
        // Check for mouse press with new Input System
        if (Mouse.current.leftButton.wasPressedThisFrame)
        {
            // Check if the pointer is over a UI element
            if (EventSystem.current.IsPointerOverGameObject())
            {
                isMouseDownOnClickableObject = true;
                return;
            }

            // Only flag that you've moused down on a clickableObject if you're not dragging.
            isMouseDownOnClickableObject = IsPointerOverClickableObject() && isDragging;
            dragOrigin = Mouse.current.position.ReadValue(); // Get the mouse position
            isDragging = false;
            isSnappingBack = false;
        }

        // Check for mouse hold with new Input System
        if (Mouse.current.leftButton.isPressed)
        {
            if (isMouseDownOnClickableObject)
            {
                return;
            }

            Vector3 currentMousePosition = Mouse.current.position.ReadValue(); // Get the current mouse position
            if (!isDragging && Vector3.Distance(dragOrigin, currentMousePosition) > dragThreshold)
            {
                isDragging = true;
            }

            if (isDragging)
            {
                Vector3 direction = cam.ScreenToWorldPoint(dragOrigin) - cam.ScreenToWorldPoint(currentMousePosition);
                direction.z = 0;
                cam.transform.position += direction;
                dragOrigin = currentMousePosition;

                // Apply boundary constraints based on camera edges
                Vector3 clampedPosition = cam.transform.position;
                float camHeight = cam.orthographicSize;
                float camWidth = camHeight * cam.aspect;

                // Adjust the right boundary if the menu is displayed
                isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;
                float rightBoundaryOffset = isMenuDisplayed ? boundaryOffset + menuWidth : boundaryOffset;

                clampedPosition.x = Mathf.Clamp(clampedPosition.x, gridMin.x + camWidth - boundaryOffset, gridMax.x - camWidth + rightBoundaryOffset);
                clampedPosition.y = Mathf.Clamp(clampedPosition.y, gridMin.y + camHeight - boundaryOffset, gridMax.y - camHeight + boundaryOffset);
                cam.transform.position = clampedPosition;
            }
        }

        // Check for mouse release with new Input System
        if (Mouse.current.leftButton.wasReleasedThisFrame)
        {
            if (!isDragging)
            {
                if (!isMouseDownOnClickableObject)
                {
                    ClickableObject clickableObject = GetClickableObjectUnderMouse();
                    if (clickableObject != null)
                    {
                        HandleObjectClick(clickableObject);
                    }
                }
            }
            isDragging = false;
            isMouseDownOnClickableObject = false;

            // Set target position for snap-back based on camera edges
            snapBackTarget = cam.transform.position;
            float camHeight = cam.orthographicSize;
            float camWidth = camHeight * cam.aspect;

            // Adjust the right boundary if the menu is displayed
            isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;
            float rightBoundaryOffset = isMenuDisplayed ? menuWidth : 0f;

            snapBackTarget.x = Mathf.Clamp(snapBackTarget.x, gridMin.x + camWidth, gridMax.x - camWidth + rightBoundaryOffset);
            snapBackTarget.y = Mathf.Clamp(snapBackTarget.y, gridMin.y + camHeight, gridMax.y - camHeight);
            isSnappingBack = true;
        }

        // Handle smooth snap-back
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

    public bool IsPointerOverClickableObject()
    {
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(Mouse.current.position.ReadValue()), Vector2.zero);
        return hit.collider != null && hit.collider.GetComponent<ClickableObject>() != null;
    }

    public ClickableObject GetClickableObjectUnderMouse()
    {
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(Mouse.current.position.ReadValue()), Vector2.zero);
        return hit.collider != null ? hit.collider.GetComponent<ClickableObject>() : null;
    }

    private void HandleObjectClick(ClickableObject clickableObject)
    {
        clickableObject.HandleClick();

        // Check if the clicked object is under the area where the menu will be displayed
        Vector3 objectPosition = clickableObject.transform.position;
        RectTransform rectTransform = gameMaster.choicePanel.GetComponent<RectTransform>();
        float menuWidthInWorldUnits = rectTransform.rect.width * cam.orthographicSize * 2 / Screen.height;

        // Calculate the right boundary of the camera view
        float camHeight = cam.orthographicSize;
        float camWidth = camHeight * cam.aspect;
        float rightEdgeOfCamera = cam.transform.position.x + camWidth;

        // If the object is within the menu's width from the right edge of the camera
        isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;

        if (objectPosition.x > rightEdgeOfCamera - menuWidthInWorldUnits && isMenuDisplayed)
        {
            // Pan the camera to the right to ensure the object remains visible
            float targetX = objectPosition.x + menuWidthInWorldUnits - camWidth;
            Vector3 newPosition = new Vector3(targetX, cam.transform.position.y, cam.transform.position.z);

            cam.transform.position = newPosition;
        }
    }
}*/