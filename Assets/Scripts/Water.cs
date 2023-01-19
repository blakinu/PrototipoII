using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Water : MonoBehaviour
{
    public GameObject water;
    // Start is called before the first frame update
    void Start()
    {
        Action.OnAction += TurnOnWater;
    }

    // Update is called once per frame
    void Update()
    {

    }

    void TurnOnWater(string action)
    {
        if (action != "water") return;

        water.SetActive(true);
    }

    void OnTriggerExit(Collider other)
    {
        if (other.tag != "Player") return;

        water.SetActive(false);
    }
}
