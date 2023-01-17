using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateAsCamera : MonoBehaviour
{
    private GameObject _maincam;
    // Start is called before the first frame update
    void Start()
    {
        _maincam = GameObject.FindGameObjectWithTag("MainCamera");
    }

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
