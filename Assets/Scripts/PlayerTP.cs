using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTP : MonoBehaviour
{
    public PlatformTP[] platforms;
    private CharacterController characterController;

    void Start() {
        characterController = transform.GetComponent<CharacterController>();
        foreach (PlatformTP plat in platforms)
            plat.OnPlayerPress += TPto;
    }
    void TPto(GameObject platformToTP) {
        characterController.enabled = false;
        transform.position = platformToTP.gameObject.transform.position +
                Vector3.Scale(platformToTP.GetComponent<Renderer>().bounds.size, new Vector3(0,1,0));
        characterController.enabled = true;
    }
}
