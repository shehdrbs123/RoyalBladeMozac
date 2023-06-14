using UnityEngine;
/// <summary>
/// effect 1개 사용하며 0번을 사용한다.
/// </summary>
[RequireComponent(typeof(StatusComponent),typeof(AttackableManager))]
public class SkillActionDamage : SkillAction
{
    private StatusComponent stat;
    public AttackableManager attackableManager;
    

    protected override void Awake()
    {
        base.Awake();
        stat = GetComponent<StatusComponent>();
        attackableManager = GetComponent<AttackableManager>();
    }

    protected override void Start()
    {
        base.Start();
        particle[0].transform.rotation = Quaternion.Euler(-90, 0, 0);
        particle[0].transform.position += Vector3.up;
    }


    public bool Damage()
    {
        int applyedDamage = stat.CurrentStatus.damagePoint + skillData.StructSkillData.abilityValue[0];
        particle[0].Play();
        return attackableManager.Damage(applyedDamage);
    }


    public override void execute(out int gaugeRate,out float coolTime)
    {
        coolTime = 0;
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
