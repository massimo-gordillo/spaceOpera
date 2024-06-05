using UnityEngine;

public class CameraDrag : MonoBehaviour
{
    private Vector3 dragOrigin;
    private bool isDragging = false;
    public bool isMouseDownOnClickableObject = false;
    private float dragThreshold = 10f;

    public bool IsDragging()
    {
        return isDragging;
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            //only flag that you've moused down on a clickableObject if you're not dragging. 
            isMouseDownOnClickableObject = IsPointerOverClickableObject() && isDragging;
            dragOrigin = Input.mousePosition;
            isDragging = false;
        }

        if (Input.GetMouseButton(0))
        {
            Vector3 currentMousePosition = Input.mousePosition;
            if (!isDragging && Vector3.Distance(dragOrigin, currentMousePosition) > dragThreshold)
            {
                isDragging = true;
            }

            if (isDragging)
            {
                Vector3 direction = Camera.main.ScreenToWorldPoint(dragOrigin) - Camera.main.ScreenToWorldPoint(currentMousePosition);
                direction.z = 0;
                Camera.main.transform.position += direction;
                dragOrigin = currentMousePosition;
            }
        }
        if (Input.GetMouseButtonUp(0))
        {
            print("isDragging: " + isDragging);
            print("isMouseDownOnClickableObject" + isMouseDownOnClickableObject);
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
        }
    }

    public bool IsPointerOverClickableObject()
    {
        RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
        return hit.collider != null && hit.collider.GetComponent<ClickableObject>() != null;
    }

    public ClickableObject GetClickableObjectUnderMouse()
    {
        RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
        return hit.collider != null ? hit.collider.GetComponent<ClickableObject>() : null;
    }
}