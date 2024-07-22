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
        gridMin = new Vector2(-1, -1);
        gridMax = new Vector2(gameMaster.gridX + 1, gameMaster.gridY + 1);

        //get the width of the rhs menu and set that to the allowable extra camera view on rhs when menu is open
        menuWidth = gameMaster.choicePanel.GetComponent<RectTransform>().rect.width * cam.orthographicSize * 2 / Screen.height;
        Debug.Log($"menuWidth is {menuWidth}");
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

            // Only flag that you've moused down on a clickableObject if you're not dragging.
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

                // Adjust the right boundary if the menu is displayed
                isMenuDisplayed = gameMaster.choicePanel.gameObject.activeSelf;
                float rightBoundaryOffset = isMenuDisplayed ? boundaryOffset + menuWidth : boundaryOffset;

                clampedPosition.x = Mathf.Clamp(clampedPosition.x, gridMin.x + camWidth - boundaryOffset, gridMax.x - camWidth + rightBoundaryOffset);
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
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
        return hit.collider != null && hit.collider.GetComponent<ClickableObject>() != null;
    }

    public ClickableObject GetClickableObjectUnderMouse()
    {
        RaycastHit2D hit = Physics2D.Raycast(cam.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
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
        Debug.Log($"object position: {objectPosition.x}, right edge of camera: {rightEdgeOfCamera}, menuWidthInWorldUnits: {menuWidthInWorldUnits}, x position edge {rightEdgeOfCamera - menuWidthInWorldUnits}, is menu displayed: {isMenuDisplayed}");
        
        if (objectPosition.x > rightEdgeOfCamera - menuWidthInWorldUnits && isMenuDisplayed)
        {
            // Pan the camera to the right to ensure the object remains visible
            float targetX = objectPosition.x + menuWidthInWorldUnits - camWidth;
            //float targetX = gridMax.x - objectPosition.x + menuWidthInWorldUnits - camWidth;
            Vector3 newPosition = new Vector3(targetX, cam.transform.position.y, cam.transform.position.z);
            //Debug.Log($"old camera position: {cam.transform.position}, new camera position: {newPosition.x}");
            // Clamp the new position to the grid limits
            //newPosition.x = Mathf.Clamp(newPosition.x, gridMin.x + camWidth, gridMax.x - camWidth);
            Debug.Log($"old camera position: {cam.transform.position}, new camera position: {newPosition.x}");
            cam.transform.position = newPosition;
            //cam.transform.position = Vector3.Lerp(cam.transform.position, newPosition, snapBackSpeed/10);// * Time.deltaTime);
        }

        
    }
}
