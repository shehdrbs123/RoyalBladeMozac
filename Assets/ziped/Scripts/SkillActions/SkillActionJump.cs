using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 점프를 하는 스킬이다.
/// ability 0번 : jump 할때 힘
/// gaugeRaiseValue 0번 :점프할 때마다 오르는 양
/// 
/// </summary>

[RequireComponent(typeof(StatusComponent),typeof(Rigidbody))]
public class SkillActionJump : SkillAction
{
    private Rigidbody rigid;
    private StatusComponent stat;

    private Vector3 startPos;
    private Vector3 direction;
    private float distance;
    private LayerMask mask;
    // Start is called before the first frame update
    protected override void Awake()
    {
        base.Awake();
        rigid = GetComponent<Rigidbody>();
        stat = GetComponent<StatusComponent>();
    }
    protected override void Start()
    {
        base.Start();
        mask = LayerMask.GetMask("Obstacle");
        direction = Vector3.up;
        distance = 2.7f;
    }

    public bool Jump()
    {
        if (stat.isGround)
        {
            PlayEffect(EffectPos.Lower, particle[0],Vector3.zero);
            startPos = transform.position + Vector3.down * 1.5f;
            if (!Physics.Raycast(startPos, direction, distance, mask))
            {
                rigid.AddForce(Vector3.up * skillData.StructSkillData.abilityValue[0], ForceMode.VelocityChange);
                stat.isGround = false;
                return true;
            }
        }
        return false;
    }

    public void OnCollisionStay(Collision other)
    {
        if(other.gameObject.CompareTag("Ground"))
        {
            stat.isGround = true;
        }
    }

    public void OnCollisionExit(Collision other)
    {
        if (other.gameObject.CompareTag("Ground"))
        {
            stat.isGround = false;
        }
    }

    public override void execute(out int gaugeRate, out float coolTime)
    {
        gaugeRate = 0;
        coolTime = 0;
        if (Jump())
            gaugeRate = skillData.StructSkillData.gaugeRaiseValue[0];
    }

#if UNITY_EDITOR
    public void OnDrawGizmos()
    {
        startPos = transform.position+ Vector3.right + Vector3.down* 1.5f;
        direction = Vector3.up;
        distance = 2.7f;
        Gizmos.color = Color.red;
        Gizmos.DrawLine(startPos, startPos + direction * distance);
    }
#endif  
}
