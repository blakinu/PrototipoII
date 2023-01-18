using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfoFunctions : MonoBehaviour
{
    // Update is called once per frame
    public void Appear() {
        Transform infoBox = transform.GetChild(0);
        infoBox.gameObject.SetActive(true);
    }

    public void Disappear() {
        Transform infoBox = transform.GetChild(0);
        infoBox.gameObject.SetActive(false);
    }
}
