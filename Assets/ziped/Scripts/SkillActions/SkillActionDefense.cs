using System.Collections;
using UnityEngine;

/// <summary>
/// 기본 방어 스킬이다
/// time 0번 : 방어 시간
/// time 1번 : 쿨타임
/// ability 0번 : force
/// particle 0번 : 막았을 시 이펙트
/// </summary>
public class SkillActionDefense : SkillAction
{
    protected float currentTIme = 0;
    protected Vector3 startPos;
    protected Vector3 direction;
    protected float distance;
    protected LayerMask mask;

    protected Coroutine isRun = null;
    protected override void Start()
    {
        base.Start();
        direction = Vector3.up;
        distance=4;
        mask = LayerMask.GetMask("Obstacle");
    }
    protected virtual IEnumerator Defense()
    {
        currentTIme = 0;

        while(currentTIme <= skillData.StructSkillData.time[0])
        {
            startPos = transform.position - Vector3.up * 1.5f;
            RaycastHit hit;
            if(Physics.Raycast(startPos,direction,out hit,distance, mask))
            {
                RaycastHit[] hits = Physics.RaycastAll(startPos, direction,50,mask);
                PlayEffect(EffectPos.Upper, particle[0], Vector3.zero);
                for(int i=0;i<hits.Length;i++)
                {
                    Rigidbody other = hits[i].collider.GetComponent<Rigidbody>();
                    int force = skillData.StructSkillData.abilityValue[0];
                    other.velocity = Vector3.up * force;
                }
                break;
            }
            currentTIme += Time.deltaTime;
            yield return null;
        }
        isRun = null;
    }
    // Start is called before the first frame update
    public override void execute(out int gaugeRate, out float coolTime)
    {
        gaugeRate = 0;
        coolTime = skillData.StructSkillData.time[1];
        if (isRun == null)
        {
            isRun = StartCoroutine(Defense());
        }
    }

#if UNITY_EDITOR
    public void OnDrawGizmos()
    {
        startPos = transform.position + Vector3.left + Vector3.down * 1.5f;
        direction = Vector3.up;
        distance = 4f;
        Gizmos.color = Color.blue;
        Gizmos.DrawLine(startPos, startPos + direction * distance);
    }
#endif  
}
