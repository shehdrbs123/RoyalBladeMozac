using UnityEngine;
/// <summary>
/// �⺻ ���� ��ų�̴�
/// effect 1�� ����ϸ� 0���� ����Ѵ�.
/// ability 0�� = ������
/// particle 0�� = ���� ��ƼŬ
/// gaugeRaiseValue 0�� = ������ gauge ������ ��
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
