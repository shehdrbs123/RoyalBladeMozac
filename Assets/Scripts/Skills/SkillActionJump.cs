using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class SkillActionJump : SkillAction
{
    [SerializeField]private bool isGround = false;
    private Rigidbody rigid;

    // Start is called before the first frame update
    private void Awake()
    {
        rigid = GetComponent<Rigidbody>();
    }

    public bool Jump()
    {
        if (isGround)
        {
            rigid.AddForce(Vector3.up * skillData.StructSkillData.abilityValue,ForceMode.VelocityChange);
            isGround = false;
            return true;
        }
        return false;
    }

    public void OnCollisionStay(Collision other)
    {
        if(other.gameObject.CompareTag("Ground"))
        {
            isGround = true;
        }
    }

    public void OnCollisionExit(Collision other)
    {
        if (other.gameObject.CompareTag("Ground"))
        {
            isGround = false;
        }
    }

    public override void execute(out int gaugeRate)
    {
        gaugeRate = 0;
        if (Jump())
            gaugeRate = skillData.StructSkillData.gaugeRaiseValue;
    }

    public override void powerexecute()
    {
        throw new System.NotImplementedException();
    }
}
