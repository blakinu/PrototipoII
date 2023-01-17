using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateAsCamera : MonoBehaviour
{
    public GameObject _maincam;
    // Update is called once per frame
    void Update()
    {
        _maincam.transform.parent = null;
        float x = transform.rotation.x;
        float z = transform.rotation.z;
        float w = transform.rotation.w;
        transform.rotation.Set(x,_maincam.transform.rotation.y,z,w);
        _maincam.transform.parent = transform;
    }
}
