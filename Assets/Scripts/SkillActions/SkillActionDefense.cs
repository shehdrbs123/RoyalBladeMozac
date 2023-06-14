using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkillActionDefense : SkillAction
{
    private Collider cols;
    int currentTIme = 0;
    Vector3 startPos; 
    Vector3 direction;
    float distance;
    protected override void Start()
    {
        Vector3 startPos = transform.position + Vector3.down * 2;
        Vector3 direction = Vector3.up;
        float distance;
    }
    IEnumerator Defense()
    {
        
        while(currentTIme <= skillData.StructSkillData.time[0])
        {

            yield return null;
        }
        
    }
    // Start is called before the first frame update
    public override void execute(out int gaugeRate)
    {
        gaugeRate = 0;
        StartCoroutine(Defense());
    }

#if UNITY_EDITOR
    public void OnDrawGizmos()
    {
        Vector3 startPos = transform.position + Vector3.left + Vector3.down * 1.5f;
        Vector3 direction = Vector3.up;
        float distance = 2.7f;
        Gizmos.color = Color.blue;
        Gizmos.DrawLine(startPos, startPos + direction * distance);
    }
#endif  
}
