using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlatformTP : MonoBehaviour
{
    public GameObject PlatformToTP;
    public delegate void PlatformTPing(GameObject platform);
    public event PlatformTPing OnPlayerPress;
    
    static private bool key = false;

    void Update() {
        if (Input.GetKeyDown("joystick button 2")) {
            key = true;
        }
    }

    void OnTriggerStay(Collider other) {
        Debug.Log("TRIGGER");
        if (other.gameObject.tag == "Player" && key) {
            Debug.Log("PRESSED");
            key = false;
            OnPlayerPress(PlatformToTP);
        }
    }
}
