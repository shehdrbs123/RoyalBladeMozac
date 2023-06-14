using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PausePanelScript : MonoBehaviour
{
    private Canvas PauseCanvas;

    private void Awake()
    {
        PauseCanvas = GetComponent<Canvas>();
    }

    public void Pause()
    {
        GameManager.Instance.GamePause(true);
        PauseCanvas.enabled = true;
    }

    public void Continue()
    {
        GameManager.Instance.GamePause(false);
        PauseCanvas.enabled = false;
    }

    public void Exit()
    {
        GameManager.Instance.GameExit();
    }
}
