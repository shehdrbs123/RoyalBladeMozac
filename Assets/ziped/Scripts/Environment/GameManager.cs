using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    private static GameManager instance = null;

    public GameObject player { private set; get; }

    public GameObject EndPanelPrefab;
    private GameObject EndPanel;
    public bool isGameOver { private set; get; }

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
        }
    }
    public static GameManager Instance
    {
        get
        {
            if (null == instance)
            {
                return null;
            }
            return instance;
        }
    }

    private void Start()
    {
        init();
    }

    private void init()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        EndPanel = Instantiate(EndPanelPrefab);
    }

    public void GameOver()
    {
        player.SetActive(false);
        isGameOver = true;
        Invoke("_GameOverOperation", 1);
    }
    private void _GameOverOperation()
    {
        EndPanel.GetComponent<Canvas>().enabled = true;
        GamePause(true);
    }

    public void GameRestart()
    {
        GamePause(false);       
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void GameExit()
    {
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
        Application.Quit(0);
#endif
    }

    public void GamePause(bool isEnable)
    {
        timeScaleModify(1);
        if (isEnable)
        {
            timeScaleModify(0);
        }     
    }

    public void timeScaleModify(float scale)
    {
        Time.timeScale = scale;
    }
}
