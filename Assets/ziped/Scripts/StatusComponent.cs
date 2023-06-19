using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.Events;
[RequireComponent(typeof(Animator))]
public class StatusComponent : MonoBehaviour
{

    [SerializeField]
    private StatusData _BaseStatus;
    public StatusData BaseStatus { set { _BaseStatus = value; } get { return _BaseStatus; } }

    private StructStatus maxStatus;
    public StructStatus MaxStatus { 
        private set { maxStatus = value; }
        get { return maxStatus; }
    }

    private StructStatus currentStatus;
    public StructStatus CurrentStatus
    {
        private set { currentStatus = value; }
        get { return currentStatus; }
    }

    public StructStatus reinforceStatus;
    [SerializeField]
    private UnityEvent DieOperation;
    private Animator anim;

    public Action afterCurrentHPMotify;
    public Action afterMaxHpMotify;
    private bool _isGround = false;
    public bool isGround 
    { 
        set 
        { _isGround = value;
            anim.SetBool("isGround", value);
        }
        get
        {
            return _isGround;
        }
    }

    private bool _isAttack = false;
    public bool IsAttack
    {
        set
        {
            _isAttack = value;
            anim.SetTrigger("isAttack");
            _isAttack = false;
        }
        get
        {
            return _isAttack;
        }
    }
    private void Awake()
    {
        anim = GetComponent<Animator>();
    }

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
            Debug.Log(String.Format("{0}의 최대체력에 변화가 있습니다 => {1} ",name, MaxStatus.hp));
#endif      
            if(MaxStatus.hp < CurrentStatus.hp)
            {
                currentStatus.hp = MaxStatus.hp;
                afterCurrentHPMotify();
            }
        };
    }


    public void Init()
    {
        CurrentStatus = _BaseStatus.Status;
        MaxStatus = _BaseStatus.Status;
        reinforceStatus = _BaseStatus.Status;
    }

    public void AddReinforce(ref StructStatus status)
    {
        reinforceStatus.hp += status.hp;
        reinforceStatus.damagePoint += status.damagePoint;
        if (reinforceStatus.hp <= 8)
            SetMaxHp(reinforceStatus.hp);
        else
            SetMaxHp(8);

        currentStatus.damagePoint = reinforceStatus.damagePoint;

        afterMaxHpMotify();
    }
    public void Heal(int healCount)
    {
        AddCurrentHP(healCount);
    }

    public void ApplyDamage(int damage, Color damageTextColor)
    {
        int applyedDamage = damage;
        
        DamageTextManager.Instance.ShowDamageText(transform.position, applyedDamage.ToString(), damageTextColor);
        if (damage >= CurrentStatus.hp)
        {
            currentStatus.hp = 0;
            DieOperation.Invoke();
        }
        else
        {
            AddCurrentHP(-damage);
        }

    }
    private void AddCurrentHP(int hp)
    {
        currentStatus.hp += hp;
        if (currentStatus.hp > maxStatus.hp)
            currentStatus.hp = maxStatus.hp;
        afterCurrentHPMotify();
    }
    
    private void SetMaxHp(int hp)
    {
        maxStatus.hp = hp;
        afterMaxHpMotify();
    }
}


