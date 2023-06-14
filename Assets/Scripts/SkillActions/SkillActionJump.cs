using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class SkillActionJump : SkillAction
{
    [SerializeField]private bool isGround = false;
    private Rigidbody rigid;

    private Vector3 startPos;
    private Vector3 direction;
    private float distance;
    // Start is called before the first frame update
    protected override void Awake()
    {
        base.Awake();
        rigid = GetComponent<Rigidbody>();
    }
    protected override void Start()
    {
        base.Start();
        startPos = transform.position + Vector3.down * 1.5f;
        direction = Vector3.up;
        distance = 2.7f;
    }

    public bool Jump()
    {
        if (isGround)
        {

            particle[0].Play();
            LayerMask mask = LayerMask.GetMask("Obstacle");
            if (!Physics.Raycast(startPos, direction, distance, mask))
            {
                rigid.AddForce(Vector3.up * skillData.StructSkillData.abilityValue[0], ForceMode.VelocityChange);
                isGround = false;
                return true;
            }
            else
            {
                Debug.Log("½ÉºÃ´Ù");
            }
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
