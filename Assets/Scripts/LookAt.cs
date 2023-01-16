using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookAt : MonoBehaviour
{
    private const float _maxDistance = 10;
    private GameObject _gazedAtObject = null;

    /// <summary>
    /// Update is called once per frame.
    /// </summary>
    public void Update()
    {
        // Casts ray towards camera's forward direction, to detect if a GameObject is being gazed
        // at.
        RaycastHit hit;
        if (Physics.Raycast(transform.position, transform.forward, out hit, _maxDistance))
        {
            // GameObject detected in front of the camera.
            if (_gazedAtObject != hit.transform.gameObject)
            {
                if (hit.transform.gameObject.tag == "INFO") {
                    hit.transform.gameObject.SendMessage("Appear");
                } else {
                    if (_gazedAtObject != null)
                        if (_gazedAtObject.tag == "INFO") {
                            _gazedAtObject.SendMessage("Disappear");
                        }
                }
                _gazedAtObject = hit.transform.gameObject;
            }
        }
        else
        {
            if (_gazedAtObject != null) {
                if (_gazedAtObject.tag == "INFO") {
                    _gazedAtObject.SendMessage("Disappear");
                }
            }
            _gazedAtObject = null;
        }
    }
}

