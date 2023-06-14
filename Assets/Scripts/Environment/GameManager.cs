using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    private static GameManager instance = null;

    private GameObject player;

    //private bool isGameOver = false;

    public GameObject EndPanelPrefab;
    private GameObject EndPanel;
    void Awake()
    {
        if (null == instance)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }        
    }

    private void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        EndPanel = Instantiate(EndPanelPrefab);
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


    public void GameOver()
    {
        player.SetActive(false);
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
