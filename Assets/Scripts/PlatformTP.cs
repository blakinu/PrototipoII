using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlatformTP : MonoBehaviour
{
    public GameObject PlatformToTP;
    public delegate void PlatformTPing(GameObject platform);
    public event PlatformTPing OnPlayerPress;

    static private bool key = false;
    static private bool inside = false;

    void Update()
    {
        if (Input.GetButtonDown("Action") && inside)
        {
            key = true;
        }
    }

    void OnTriggerStay(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            inside = true;
            if (key)
            {
                Debug.Log("PRESSED");
                key = false;
                OnPlayerPress(PlatformToTP);
            }
        }
    }
    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            inside = false;
        }
    }

}
