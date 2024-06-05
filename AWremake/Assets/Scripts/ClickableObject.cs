using UnityEngine;

public class ClickableObject : MonoBehaviour
{
    private bool isDragging = false;
    private CameraDrag cameraDrag;

    protected virtual void Start()
    {
        cameraDrag = Camera.main.GetComponent<CameraDrag>();
        if (cameraDrag == null)
        {
            Debug.LogError("CameraDrag component not found on the main camera.");
        }
    }


    void Update()
    {
        // Update the dragging status from CameraDrag
        if (Camera.main != null)
        {
            //cameraDrag = Camera.main.GetComponent<CameraDrag>();
            if (cameraDrag != null)
            {
                isDragging = cameraDrag.IsDragging();
            }
        }
    }

/*    private void OnMouseUpAsButton()
    {
        print("onMouseUpAsButton");
        // Ensure cameraDrag is not null before calling the method
        if (!isDragging && cameraDrag.isMouseDownOnClickableObject)
        //if (!isDragging)
        {
            
            HandleClick();
        }
    }*/

    public virtual void HandleClick()
    {
        Debug.Log("should be overridden: Clicked on: " + gameObject.name);
        // Override this method in the derived class to handle clicks
    }
}