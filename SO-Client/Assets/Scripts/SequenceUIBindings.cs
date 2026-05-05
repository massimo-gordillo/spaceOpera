using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SequenceUIBindings : MonoBehaviour
{
    [Serializable]
    public class UiBindingEntry
    {
        public string key;
        public GameObject targetObject;
        public Selectable selectable;
    }

    [SerializeField]
    private List<UiBindingEntry> bindings = new List<UiBindingEntry>();

    public bool TryGetSelectable(string key, out Selectable selectable)
    {
        selectable = null;
        if (string.IsNullOrWhiteSpace(key))
        {
            return false;
        }

        for (int i = 0; i < bindings.Count; i++)
        {
            UiBindingEntry entry = bindings[i];
            if (entry != null && entry.key == key && entry.selectable != null)
            {
                selectable = entry.selectable;
                return true;
            }
        }

        return false;
    }

    public bool TryGetObject(string key, out GameObject targetObject)
    {
        targetObject = null;
        if (string.IsNullOrWhiteSpace(key))
        {
            return false;
        }

        for (int i = 0; i < bindings.Count; i++)
        {
            UiBindingEntry entry = bindings[i];
            if (entry != null && entry.key == key)
            {
                if (entry.targetObject != null)
                {
                    targetObject = entry.targetObject;
                    return true;
                }

                if (entry.selectable != null)
                {
                    targetObject = entry.selectable.gameObject;
                    return true;
                }
            }
        }

        return false;
    }

    public void SetInteractable(HashSet<string> keys, bool interactable)
    {
        if (keys == null || keys.Count == 0)
        {
            return;
        }

        for (int i = 0; i < bindings.Count; i++)
        {
            UiBindingEntry entry = bindings[i];
            if (entry == null || entry.selectable == null)
            {
                continue;
            }

            if (keys.Contains(entry.key))
            {
                entry.selectable.interactable = interactable;
            }
        }
    }
}
