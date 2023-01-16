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
        movement = (Input.GetAxis("Horizontal") * transform.right + Input.GetAxis("Vertical") * transform.forward).normalized;
    }

    void FixedUpdate()
    {
        rb.velocity = new Vector3(0, rb.velocity.y,0) + movement * velocidad * Time.fixedDeltaTime * 100;
    }
}