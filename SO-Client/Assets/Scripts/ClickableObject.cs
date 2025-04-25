using UnityEngine;
using UnityEngine.EventSystems;

public class ClickableObject : MonoBehaviour
{
    private bool isDragging = false;
    private CameraManager cameraManager;

    protected virtual void Start()
    {
        cameraManager = Camera.main.GetComponent<CameraManager>();
        if (cameraManager == null)
        {
            Debug.LogError("CameraDrag component not found on the main camera.");
        }
    }


    void Update()
    {
        // Update the dragging status from CameraDrag
        if (Camera.main != null)
        {
            //cameraManager = Camera.main.GetComponent<CameraDrag>();
            if (cameraManager != null)
            {
                isDragging = cameraManager.IsDragging();
            }
        }
    }

/*    private void OnMouseUpAsButton()
    {
        print("onMouseUpAsButton");
        // Ensure cameraManager is not null before calling the method
        if (!isDragging && cameraManager.isMouseDownOnClickableObject)
        //if (!isDragging)
        {
            
            HandleClick();
        }
    }*/

/*    public void OnPointerClick(PointerEventData eventData)
    {
        // Ensure cameraManager is not null before calling the method
        //if (!isDragging && cameraManager.isMouseDownOnClickableObject)
        //{
            HandleClick();
        //}
    }*/

    public virtual void HandleClick()
    {
        Debug.Log("should be overridden by child class: Clicked on: " + gameObject.name);
        // Override this method in the derived class to handle clicks
    }
}