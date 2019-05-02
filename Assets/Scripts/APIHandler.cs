using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine.Networking;

public class APIHandler : MonoBehaviour
{
    public static UnityWebRequest Post(string url, string json)
    {
        // 送信準備
        UnityWebRequest request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbGET);

        // ヘッダーの設定
        request.SetRequestHeader("Content-Type", "application/json");

        // 文字列のJsonデータをbyte[]に変換する。
        byte[] postData = System.Text.Encoding.UTF8.GetBytes(json);
        request.uploadHandler = new UploadHandlerRaw(postData);
        request.downloadHandler = new DownloadHandlerBuffer();

        return request;
    }
}
