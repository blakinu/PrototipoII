using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fire : MonoBehaviour
{
    public GameObject fire;
    // Start is called before the first frame update
    void Start()
    {
        Action.OnAction += TurnOnFire;
    }

    // Update is called once per frame
    void Update()
    {

    }

    void TurnOnFire(string action)
    {
        if (action != "fire") return;

        fire.SetActive(true);
    }

    void OnTriggerExit(Collider other)
    {
        if (other.tag != "Player") return;

        fire.SetActive(false);
    }
}
