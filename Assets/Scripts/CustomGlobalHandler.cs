using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.UI;

[RequireComponent(typeof(GameObject))]
public class CustomGlobalHandler : MonoBehaviour
{
    [SerializeField]
    public GameObject holeMoneyObject;

    public void GenerateMoneyHole()
    {
        // 視線を取得する
        IMixedRealityEyeGazeProvider gazeProvider = MixedRealityToolkit.InputSystem.EyeGazeProvider;
        Vector3 gazeDirection = gazeProvider.GazeDirection;
        Vector3 gazeOrigin = gazeProvider.GazeOrigin;

        // Objectの生成
        GameObject newObject = Instantiate(holeMoneyObject);

        // カメラの向き先からMoneyHoleの向き先を決定する。
        Camera camera = CameraCache.Main;
        Quaternion holeRotation = new Quaternion(0.0f, camera.transform.localRotation.y, 0.0f, camera.transform.localRotation.w);

        // 視線の先にあるオブジェクトを取得する。
        RaycastHit hitInfo;
        if (Physics.Raycast(gazeOrigin, gazeDirection.normalized, out hitInfo, 5f))
        {
            Debug.Log("RayHit!!!");

            // 既に作成済みのオブジェクトを解放する。
            GameObject hitObject = hitInfo.collider.gameObject;
            if (hitObject.CompareTag(holeMoneyObject.tag))
            {
                Destroy(hitObject, 0.0f);
                return;
            }

            // ヒットしたオブジェクトの座標にオブジェクトを配置する。
            newObject.transform.localRotation = holeRotation;
            newObject.transform.position = hitInfo.transform.position;
        }
        else
        {
            Debug.Log("Create new money hole");

            // デフォルトの座標のオブジェクトを配置する。
            Vector3 defaultPosition = gazeOrigin + gazeDirection.normalized * 2f;
            newObject.transform.localRotation = holeRotation;
            newObject.transform.position = defaultPosition;
        }

        // オブジェクトの有効化
        newObject.SetActive(true);
    }
}
