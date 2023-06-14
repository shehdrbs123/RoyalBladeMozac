using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HPHud : MonoBehaviour
{
    [SerializeField]
    private Sprite fillheart;
    [SerializeField]
    private Sprite emptyHeart;

    private List<Image> heartList;
    private StatusComponent playerStat;
    int currentHeartCount;
    int MaxHeartCount;

    private void Awake()
    {
        heartList = new List<Image>();
    }


    private void Start()
    {
        playerStat = GameObject.FindGameObjectWithTag("Player").GetComponent<StatusComponent>();
        playerStat.afterCurrentHPMotify += currentHpMotify;
        playerStat.afterMaxHpMotify += maxHPModify;
        heartList.AddRange(transform.GetComponentsInChildren<Image>());
        currentHeartCount = playerStat.CurrentStatus.hp;
        MaxHeartCount = currentHeartCount;
        for (int i = 0; i < playerStat.CurrentStatus.hp; i++)
        {
            heartList[i].enabled = true;
        }
    }
    private void AddHeart(int idx)
    {
        heartList[idx].enabled = true;
    }
    private void RestoreHeart(int idx)
    {
        heartList[idx].sprite = fillheart;
    }
    private void RemoveHeart(int idx)
    {
        heartList[idx].enabled = false;
    }
    
    private void DamageHeart(int idx)
    {
        heartList[idx].sprite = emptyHeart;
    }

    private void currentHpMotify()
    {
        int hp = playerStat.CurrentStatus.hp;
        if(currentHeartCount > hp)
        {
            for(int i= currentHeartCount-1;i>=hp;i--)
            {
                DamageHeart(i);
            }
        }
        else
        {
            for (int i = hp; i < currentHeartCount; i--)
            {
                RestoreHeart(i);
            }
        }
        currentHeartCount = hp;
    }

    private void maxHPModify()
    {
        int hp = playerStat.MaxStatus.hp;
        if (MaxHeartCount > hp)
        {
            for (int i = MaxHeartCount-1; i >= hp; i--)
            {
                RemoveHeart(i);
            }
        }
        else
        {
            for (int i = hp; i < MaxHeartCount; i--)
            {
                AddHeart(i);
            }
        }
        MaxHeartCount = hp;
    }
}
