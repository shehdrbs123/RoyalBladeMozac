using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
/// <summary>
/// effect 1개 사용하며 0번을 사용한다.
/// </summary>
[RequireComponent(typeof(StatusComponent),typeof(AttackableManager))]
public class SkillActionDamage : SkillAction
{
    private StatusComponent stat;
    private ParticleSystem particle;
    public AttackableManager attackableManager;
    

    private void Awake()
    {
        stat = GetComponent<StatusComponent>();
        attackableManager = GetComponent<AttackableManager>();
    }

    private void Start()
    {
        GameObject psObject = Instantiate(skillData.StructSkillData.effect[0],transform);
        psObject.transform.position = transform.position + Vector3.up;
        psObject.transform.rotation = Quaternion.Euler(-90, 0, 0);
        particle = psObject.GetComponent<ParticleSystem>();
    }


    public bool Damage()
    {
        int applyedDamage = stat.CurrentStatus.damagePoint + skillData.StructSkillData.abilityValue[0];
        particle.Play();
        return attackableManager.Damage(applyedDamage);
    }


    public override void execute(out int gaugeRate)
    {
        if(Damage())
        {
            gaugeRate = skillData.StructSkillData.gaugeRaiseValue[0];
        }
        else
        {
            gaugeRate = 0;
        }
    }
}
