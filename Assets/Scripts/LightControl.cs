using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightControl : MonoBehaviour
{
    IEnumerator turnOffCoroutine;
    public Animator animator;
    public float turnOffCooldown;
    public string roomName;

    // Start is called before the first frame update
    void Start()
    {
        MotionSensor.OnMotionDetected += TurnOnLight;
        turnOffCoroutine = TurnOffLight();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void TurnOnLight(string lightRoom)
    {
        if (roomName != lightRoom) return;

        StopCoroutine(turnOffCoroutine);
        animator.SetBool("Turn", true);
        turnOffCoroutine = TurnOffLight();
        StartCoroutine(turnOffCoroutine);
    }

    IEnumerator TurnOffLight()
    {
        yield return new WaitForSeconds(turnOffCooldown);
        animator.SetBool("Turn", false);
    }
}
