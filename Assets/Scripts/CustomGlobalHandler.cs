using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;

public class CustomGlobalHandler : MonoBehaviour, IMixedRealityInputHandler
{
    public void OnInputDown(InputEventData eventData)
    {
        Debug.Log("Hello input down!!");
    }

    public void OnInputUp(InputEventData eventData)
    {
        Debug.Log("Hello input up!!");
    }

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
