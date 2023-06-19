using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndPanelScript : MonoBehaviour
{
    public void Continue()
    {
        GameManager.Instance.GameRestart();
        
    }

    public void Exit()
    {
        GameManager.Instance.GameExit();
    }
}
