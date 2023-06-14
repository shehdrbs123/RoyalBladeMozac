using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.Events;

public class StatusComponent : MonoBehaviour
{

    [SerializeField]
    private StatusData _BaseStatus;
    public StatusData BaseStatus { set { _BaseStatus = value; } get { return _BaseStatus; } }

    public StructStatus MaxStatus;
    public StructStatus CurrentStatus;
    [SerializeField]
    private UnityEvent DieOperation;

    public Action afterCurrentHPMotify;
    public Action afterMaxHpMotify;

   
    private void OnEnable()
    {
        Init();
        afterCurrentHPMotify = () =>
        {
#if UNITY_EDITOR
            Debug.Log(String.Format("{0}의 체력에 변화가 있습니다 => {1} ",name,CurrentStatus.hp));
#endif
        };

        afterMaxHpMotify = () =>
        {
#if UNITY_EDITOR
            Debug.Log(String.Format("{0}의 체력에 변화가 있습니다 => {1} ",name, CurrentStatus.hp));
#endif
        };
    }


    public void Init()
    {
        CurrentStatus = _BaseStatus.Status;
        MaxStatus = _BaseStatus.Status;
    }

    public void ApplyDamage(int damage, Color damageTextColor)
    {
        int applyedDamage = damage;
        DamageTextManager.Instance.ShowDamageText(transform.position, applyedDamage.ToString(), damageTextColor);
        if (damage >= CurrentStatus.hp)
        {
            CurrentStatus.hp = 0;
            DieOperation.Invoke();
        }
        else
        {
            CurrentStatus.hp -= damage;
        }
        afterCurrentHPMotify();
    }
}


