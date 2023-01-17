using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionDoor : MonoBehaviour
{
    Animator animator;

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.tag == "Player" && Input.GetAxisRaw("Action") == 1 && !animator.IsInTransition(0))
        {
            animator.SetTrigger("action");
        }
    }
}
