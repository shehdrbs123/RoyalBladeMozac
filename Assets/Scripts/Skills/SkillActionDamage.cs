using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;


public class SkillActionDamage : SkillAction
{
    private StatusComponent stat;
    public HashSet<StatusComponent> AttackList = new HashSet<StatusComponent>();
    

    private void Awake()
    {
        stat = GetComponent<StatusComponent>();
    }
    public void OnTriggerEnter(Collider other)
    {
        StatusComponent stat = other.gameObject.GetComponent<StatusComponent>();
      
        if (stat)
        {
#if UNITY_EDITOR
            Debug.Log(String.Format("{0} is Added", stat.name));
#endif
            AttackList.Add(stat);
        }

    }

    public void OnTriggerExit(Collider other)
    {
        StatusComponent stat = other.gameObject.GetComponent<StatusComponent>();
        
        if (stat)
        {
            Remove(stat);
        }
            
    }

    public bool Damage()
    {
        bool isDied = false;
        List<StatusComponent> dieList = new List<StatusComponent>();
        int applyedDamage = stat.CurrentStatus.damagePoint + skillData.StructSkillData.abilityValue;
        foreach (var target in AttackList)
        {
            target.ApplyDamage(applyedDamage);
            if (!target.isActiveAndEnabled)
                dieList.Add(target);
        }

        if(dieList.Count > 0)
        {
            isDied = true;
        }


        while(dieList.Count>0)
        {
            int last = dieList.Count - 1;
            StatusComponent died = dieList[last];
            Remove(died);
            dieList.RemoveAt(last);
        }
        return isDied;
    }

    public void Remove(StatusComponent stat)
    {
#if UNITY_EDITOR
        Debug.Log(String.Format("{0} is Removed", stat.name));
#endif
        AttackList.Remove(stat);
    }

    public override void execute(out int gaugeRate)
    {
        if(Damage())
        {
            gaugeRate = skillData.StructSkillData.gaugeRaiseValue;
        }
        else
        {
            gaugeRate = 0;
        }
    }

    public override void powerexecute()
    {
        throw new System.NotImplementedException();
    }
}
