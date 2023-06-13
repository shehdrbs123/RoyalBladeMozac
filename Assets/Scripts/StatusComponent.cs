using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class StatusComponent : MonoBehaviour
{

    [SerializeField]
    private StatusData status;
    public StatusData Status { set { status = value; } }

    public StructStatus CurrentStatus;

    private void Awake()
    {
        Init();
    }

    public void Init()
    {
        CurrentStatus = status.Status;
    }

    public void ApplyDamage(int damage)
    {
        if (damage >= CurrentStatus.hp)
        {
            CurrentStatus.hp = 0;
            Die();
        }
        else
        {
            CurrentStatus.hp -= damage;
        }
    }

    public void Die()
    {
        gameObject.SetActive(false);
    }
}


