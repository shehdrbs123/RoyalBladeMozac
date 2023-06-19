using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// �ö󰡸� �������� ���������� �ִ� ��ų�̴�.
/// item 0 �� �󸶸�ŭ �������� velocity�� ������ ���ΰ�.
/// ability 0�� : ������ velocity.y�� ��
/// ability 1�� : ���� ������ ����(������)
/// particle 0�� : ������ �߻��ϴ� ����Ʈ
/// particle 1�� : �ݺ������ϴµ�, �׶� �߻��ϴ� ����Ʈ
/// 
/// </summary>
[RequireComponent(typeof(Rigidbody),typeof(AttackableManager), typeof(StatusComponent))]
[RequireComponent(typeof(EffectManager))]
public class SkillActionJumpAttack : SkillAction
{
    private Rigidbody rigid;
    private WaitForSeconds wait;
    private AttackableManager attackManager;
    private StatusComponent stat;

    enum E_JumpAttack
    {
        Jump=0,
        Attack=1,
        E_Max
    };
    // Start is called before the first frame update
    protected override void Awake()
    {
        base.Awake();
        rigid = GetComponent<Rigidbody>();
        attackManager = GetComponent<AttackableManager>();
        stat = GetComponent<StatusComponent>();
    }

    protected override void Start()
    {
        base.Start();
        wait = new WaitForSeconds(skillData.StructSkillData.time[(int)E_JumpAttack.Jump]);
    }

    public IEnumerator JumpAttack()
    {
        int[] directionList = {0, 180 };
        float currentDuration = 0;

        rigid.useGravity = false;
        PlayEffect(EffectPos.Lower, particle[(int)E_JumpAttack.Jump], Vector3.zero);
       

        while (skillData.StructSkillData.time[(int)E_JumpAttack.Attack] > currentDuration)
        {
            int applyDamage = stat.CurrentStatus.damagePoint * skillData.StructSkillData.abilityValue[(int)E_JumpAttack.Attack];
            int chooseDirection = Random.Range(0, 2);
            int direction = directionList[chooseDirection];

            rigid.velocity = Vector3.up * skillData.StructSkillData.abilityValue[(int)E_JumpAttack.Jump];
            Vector3 directionVector = new Vector3(-90, direction, 0);
            PlayEffect(EffectPos.Upper, particle[(int)E_JumpAttack.Attack], directionVector);
            stat.IsAttack = true;

            attackManager.Damage(applyDamage);
            currentDuration += skillData.StructSkillData.time[(int)E_JumpAttack.Jump];


            yield return wait;
        }
        rigid.useGravity = true;
        rigid.drag = 10;

        yield return wait;
        rigid.drag = 0;
        
    }

    public override void execute(out int gaugeRate, out float coolTime)
    {
        gaugeRate = 0;
        coolTime = 0;
        StartCoroutine(JumpAttack());
    }
}
