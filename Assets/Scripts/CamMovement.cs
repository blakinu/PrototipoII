using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamMovement : MonoBehaviour
{
    // Update is called once per frame
    void Update()
    {
        float YInput1 = Input.GetAxis("Horizontal2");
        float YInput2 = Input.GetAxis("Vertical2");
        transform.Rotate(Vector3.up * YInput1, Space.World);
        transform.Rotate(Vector3.right * YInput2);
    }
}
