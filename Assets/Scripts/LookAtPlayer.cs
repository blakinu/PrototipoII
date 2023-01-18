using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookAtPlayer : MonoBehaviour
{
    private GameObject player;
    void OnEnable()
    {
        player = GameObject.FindWithTag("Player");
    }

    void Update() {
        rotateToPlayer();
    }

    void rotateToPlayer()
    {
        transform.LookAt(Camera.main.transform);
    }
}
