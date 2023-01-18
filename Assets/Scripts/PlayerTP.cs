using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTP : MonoBehaviour
{
    public PlatformTP[] platforms;
    public Animator animator;
    private CharacterController characterController;
    private GameObject platformToTP;

    void Start()
    {
        characterController = transform.GetComponent<CharacterController>();
        foreach (PlatformTP plat in platforms)
            plat.OnPlayerPress += TPto;
        platformToTP = null;
    }

    void Update()
    {
        if (platformToTP == null || !animator.GetCurrentAnimatorStateInfo(0).IsName("Wait")) return;

        characterController.enabled = false;
        transform.position = platformToTP.gameObject.transform.position +
                Vector3.Scale(platformToTP.GetComponent<Renderer>().bounds.size, new Vector3(0, 1, 0));
        characterController.enabled = true;
        platformToTP = null;
        animator.SetBool("TP", false);
    }

    void TPto(GameObject platform)
    {
        if (!animator.GetCurrentAnimatorStateInfo(0).IsName("AfterTP") && !animator.GetCurrentAnimatorStateInfo(0).IsName("Idle")) return;

        platformToTP = platform;
        animator.SetBool("TP", true);
    }
}
