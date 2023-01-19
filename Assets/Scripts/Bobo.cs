using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bobo : MonoBehaviour
{
    public AudioSource boboSound;
    // Start is called before the first frame update
    void Start()
    {
        Action.OnAction += PlaySound;
    }

    // Update is called once per frame
    void Update()
    {

    }

    void PlaySound(string action)
    {
        if (action != "bobo" || boboSound.isPlaying) return;

        boboSound.Play();
    }
}
