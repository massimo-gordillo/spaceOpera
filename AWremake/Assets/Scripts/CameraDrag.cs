using UnityEngine;
using UnityEngine.EventSystems;

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

    private bool isSnappingBack = false;
    private Vector3 snapBackTarget;

    private Camera cam;

    public GameMaster gameMaster;

    private void Start()
    {
        gridMin = new Vector2(-1, -1);
        gridMax = new Vector2(gameMaster.gridX+1, gameMaster.gridY + 1);
        cam = Camera.main;
    }

    public bool IsDragging()
    {
        return isDragging;
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            // Check if the pointer is over a UI element
            if (EventSystem.current.IsPointerOverGameObject())
            {
                isMouseDownOnClickableObject = true;
                return;
            }

            //only flag that you've moused down on a clickableObject if you're not dragging. 
            isMouseDownOnClickableObject = IsPointerOverClickableObject() && isDragging;
            dragOrigin = Input.mousePosition;
            isDragging = false;
            isSnappingBack = false;
        }

        if (Input.GetMouseButton(0))
        {
            if (isMouseDownOnClickableObject)
            {
                return;
            }

            Vector3 currentMousePosition = Input.mousePosition;
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
                clampedPosition.x = Mathf.Clamp(clampedPosition.x, gridMin.x + camWidth - boundaryOffset, gridMax.x - camWidth + boundaryOffset);
                clampedPosition.y = Mathf.Clamp(clampedPosition.y, gridMin.y + camHeight - boundaryOffset, gridMax.y - camHeight + boundaryOffset);
                cam.transform.position = clampedPosition;
            }
        }

        if (Input.GetMouseButtonUp(0))
        {
            if (!isDragging)
            {
                if (!isMouseDownOnClickableObject)
                {
                    ClickableObject clickableObject = GetClickableObjectUnderMouse();
                    if (clickableObject != null)
                    {
                        clickableObject.HandleClick();
                    }
                }
            }
            isDragging = false;
            isMouseDownOnClickableObject = false;

            // Set target position for snap-back based on camera edges
            snapBackTarget = cam.transform.position;
            float camHeight = cam.orthographicSize;
            float camWidth = camHeight * cam.aspect;
            snapBackTarget.x = Mathf.Clamp(snapBackTarget.x, gridMin.x + camWidth, gridMax.x - camWidth);
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
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
        return hit.collider != null && hit.collider.GetComponent<ClickableObject>() != null;
    }

    public ClickableObject GetClickableObjectUnderMouse()
    {
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
        return hit.collider != null ? hit.collider.GetComponent<ClickableObject>() : null;
    }
}
