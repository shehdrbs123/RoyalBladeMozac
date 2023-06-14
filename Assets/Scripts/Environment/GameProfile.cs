using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;


public class GameProfile : MonoBehaviour
{
    private static GameProfile instance = null;

    private GameObject player;
    public Action afterScoreSet;
    private int _score;
    public int score
    {
        get { return _score; }
        set
        {
            _score = value;
            afterScoreSet();
        }
    }

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
        }

        player = GameObject.FindGameObjectWithTag("Player");
        afterScoreSet = () =>
        {
#if UNITY_EDITOR
            Debug.Log("스코어가 추가되었습니다");
#endif
        };
    }
    private void OnDisable()
    {
        afterScoreSet = null;

    }
    public static GameProfile Instance
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
        score = 0;
    }
    
}
