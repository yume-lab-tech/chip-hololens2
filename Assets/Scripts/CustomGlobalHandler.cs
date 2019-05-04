using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;

public class CustomGlobalHandler : InputSystemGlobalListener
{
    private void OnEnable()
    {
        Debug.Log("Enabled");
    }

    private void OnDisable()
    {
        Debug.Log("Disabled");
    }
}
