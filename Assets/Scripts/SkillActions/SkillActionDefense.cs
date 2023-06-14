using System.Collections;
using UnityEngine;

public class SkillActionDefense : SkillAction
{
    private float currentTIme = 0;
    private Vector3 startPos; 
    private Vector3 direction;
    private float distance;
    private LayerMask mask;

    private Coroutine isRun = null;
    protected override void Start()
    {
        direction = Vector3.up;
        distance=4;
        mask = LayerMask.GetMask("Obstacle");
    }
    IEnumerator Defense()
    {
        currentTIme = 0;

        while(currentTIme <= skillData.StructSkillData.time[0])
        {
            startPos = transform.position - Vector3.up * 1.5f;
            Debug.Log("½ÃÀÛ " + startPos);
            RaycastHit hit;
            if(Physics.Raycast(startPos,direction,out hit,distance, mask))
            {
                RaycastHit[] hits = Physics.RaycastAll(startPos, direction,50,mask);
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
            Debug.Log("Run!");
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
