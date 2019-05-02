using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine.Networking;

public class BlockChainHandler : MonoBehaviour, IMixedRealityInputHandler
{
    [SerializeField]
    private string url;


    public void OnInputDown(InputEventData eventData)
    {
        Debug.Log("Push");
        StartCoroutine(Connect());
    }

    public void OnInputUp(InputEventData eventData)
    {
        Debug.Log("Pop");
    }

    public IEnumerator Connect()
    {
        string json = "{'test': true}";

        using (UnityWebRequest request = APIHandler.Post(url, json))
        {
            yield return request.SendWebRequest();

            if (request.isNetworkError || request.isHttpError)
            {
                Debug.LogWarningFormat("Failed isNetworkError={0}, isHttpError={1}, responseCode={2}, {3}", request.isNetworkError, request.isHttpError, request.responseCode, request.error);
                yield break;
            } else
            {
                string responseJson = request.downloadHandler.text;
                Debug.Log(responseJson);
            }
        }
    }
}
