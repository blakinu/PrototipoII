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
        Vector3 vector = Vector3.Scale( _maincam.transform.rotation.eulerAngles, new Vector3(0,1,0));
        transform.rotation.eulerAngles.Set(vector.x,vector.y,vector.z);
    }
}
