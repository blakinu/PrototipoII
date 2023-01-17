using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    private Rigidbody rb;
    private Vector3 movement;
    public float velocidad = 1f;

    void Start()
    {
       rb = GetComponent<Rigidbody>();
    }

    void Update() {
        Transform parent = Camera.main.transform.parent;
        Camera.main.transform.parent = null;
        float x = transform.rotation.x;
        float z = transform.rotation.z;
        float w = transform.rotation.w;
        transform.rotation = new Quaternion(x,Camera.main.transform.rotation.y,z,w);
        movement = (Input.GetAxis("Horizontal") * transform.right +
                     Input.GetAxis("Vertical") * transform.forward).normalized;
        Camera.main.transform.parent = parent;
    }

    void FixedUpdate()
    {
        rb.velocity = new Vector3(0, rb.velocity.y,0) + movement * velocidad * Time.fixedDeltaTime * 100;
    }
}