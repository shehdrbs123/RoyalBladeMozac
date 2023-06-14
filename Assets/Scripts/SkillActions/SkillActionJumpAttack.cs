using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody),typeof(AttackableManager), typeof(StatusComponent))]
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
        particle[(int)E_JumpAttack.Jump].transform.position = transform.position + Vector3.down;
        particle[(int)E_JumpAttack.Attack].transform.position = transform.position + Vector3.up;

        wait = new WaitForSeconds(skillData.StructSkillData.time[(int)E_JumpAttack.Jump]);
    }

    public IEnumerator JumpAttack()
    {
        GameManager manager = GameManager.Instance;
        ParticleSystem AttackEffect = particle[(int)E_JumpAttack.Attack];
        int[] directionList = { -1, 1 };
        float currentDuration = 0;

        rigid.useGravity = false;
        particle[(int)E_JumpAttack.Jump].Play();

        while (skillData.StructSkillData.time[(int)E_JumpAttack.Attack] > currentDuration)
        {
           
            int applyDamage = stat.CurrentStatus.damagePoint * skillData.StructSkillData.abilityValue[(int)E_JumpAttack.Attack];
            int chooseDirection = Random.Range(0, 2);
            int direction = directionList[chooseDirection] * 180;

            rigid.velocity = Vector3.up * skillData.StructSkillData.abilityValue[(int)E_JumpAttack.Jump];
            AttackEffect.transform.rotation = Quaternion.Euler(-90, 0, direction);
            AttackEffect.Play();
            attackManager.Damage(applyDamage);
            currentDuration += skillData.StructSkillData.time[(int)E_JumpAttack.Jump];

            yield return wait;
        }
        rigid.useGravity = true;
        rigid.drag = 10;

        yield return wait;
        rigid.drag = 0;
        
    }

    public override void execute(out int gaugeRate)
    {
        gaugeRate = 0;
        StartCoroutine(JumpAttack());
    }
}
