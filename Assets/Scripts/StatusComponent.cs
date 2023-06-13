using System.Collections;
using System.Collections.Generic;
using System;
using System.Reflection;
using UnityEngine;

public class StatusComponent : MonoBehaviour
{

    [SerializeField]
    private StatusData status;
    public StatusData Status { set { status = value; } }

    public StructStatus CurrentStatus;

    [SerializeField]
    private SkillData[] skills;
    
    public SkillAction[] skillActions { private set; get; }
    private void Awake()
    {
        skillActions = new SkillAction[skills.Length];
        Init();
    }

    public void Init()
    {
        CurrentStatus = status.Status;
       
        for(int i=0;i<skills.Length;i++)
        {
            string skillName = skills[i].StructSkillData.SkillActionName;
            Type t = Type.GetType(skillName);
            skillActions[i] = gameObject.AddComponent(t) as SkillAction;
            skillActions[i].init(skills[i]);
        }
    }

    public void RemoveComponent(int a)
    {
        Destroy(skillActions[a]);
    }



    public void ApplyDamage(int damage)
    {
        if (damage >= CurrentStatus.hp)
        {
            CurrentStatus.hp = 0;
        }
        else
        {
            CurrentStatus.hp -= damage;
            gameObject.SetActive(false);
        }
    }

    public void Die()
    {
        
    }
}


