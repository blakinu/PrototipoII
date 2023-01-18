using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    private CharacterController controller;
    private Vector3 movement;
    public float velocidad = 1f;

    void Start()
    {
       controller = GetComponent<CharacterController>();
    }

    void Update() {
        Move();
    }

    void Move()
    {
        // Obtención de los valores de movimiento y normalización.
        movement = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical")).normalized;

        Transform newT = new GameObject().transform;
        newT.eulerAngles = new Vector3(0,Camera.main.transform.eulerAngles.y,0);
        // Transformación del movimiento respecto al sistema de coordenadas global.
        Vector3 transformedMovement = newT.transform.TransformDirection(movement * velocidad);
        
        // Movimiento.
        controller.Move(transformedMovement * Time.deltaTime);
    }
}