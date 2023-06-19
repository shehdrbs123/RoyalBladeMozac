using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[RequireComponent(typeof(Text))]
public class ScoreText : MonoBehaviour
{
    private Text scoreText;
    private void Awake()
    {
        scoreText = GetComponent<Text>();
    }
    private void Start()
    {
        AddDelegate();
    }

    private void ScoreUpdate()
    {
        scoreText.text = GameProfile.Instance.score.ToString();
    }

    private void AddDelegate()
    {
        GameProfile.Instance.afterScoreSet += ScoreUpdate;
    }
}
