using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sound : MonoBehaviour
{
    public AudioSource sound;
    public string action;
    // Start is called before the first frame update
    void Start()
    {
        Action.OnAction += PlaySound;
    }

    // Update is called once per frame
    void Update()
    {

    }

    void PlaySound(string receivedAction)
    {
        if (receivedAction != action || sound.isPlaying) return;

        sound.Play();
    }
}
