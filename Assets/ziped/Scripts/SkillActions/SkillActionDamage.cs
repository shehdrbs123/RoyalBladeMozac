using UnityEngine;
/// <summary>
/// 기본 공격 스킬이다
/// effect 1개 사용하며 0번을 사용한다.
/// ability 0번 = 데미지
/// particle 0번 = 스윙 파티클
/// gaugeRaiseValue 0번 = 성공시 gauge 오르는 양
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
    }


    public bool Damage()
    {
        int applyedDamage = stat.CurrentStatus.damagePoint + skillData.StructSkillData.abilityValue[0];
        Vector3 effectRotation = new Vector3(-90, Random.Range(0, 2) * 180, 0);
        PlayEffect(EffectPos.Upper, particle[0], effectRotation);
        stat.IsAttack = true;
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
