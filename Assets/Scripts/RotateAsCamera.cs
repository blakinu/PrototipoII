using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateAsCamera : MonoBehaviour
{
    private GameObject _maincam;
    // void Start() {
    //     device = InputSystem.GetDevice<XRNodeState>().device;
    // }

    // Update is called once per frame
    void Update()
    {
        Transform parent = _maincam.transform.parent;
        _maincam.transform.parent = null;
        float x = transform.rotation.x;
        float z = transform.rotation.z;
        float w = transform.rotation.w;
                // Vector3 rotation = InputDevice.
                //  InputTracking.GetLocalRotation(XRNode.Head).eulerAngles;
        transform.rotation.Set(x,Camera.main.transform.rotation.y,z,w);
        _maincam.transform.parent = parent;
    }
}
