using System.Collections;
using UnityEngine;

/// <summary>
/// 방어 후 힐이되는 스킬이다.
/// defense 기능에 heal 기능을 탑재
/// ability 1번 : 몇번 막으면?
/// ability 2번 : 힐량
/// </summary>
public class SkillActionDefenseHealthRecovery : SkillActionDefense
{
    private int defenseCount = 0;
    private StatusComponent playerComponenet;

    protected override void Awake()
    {
        base.Awake();
        playerComponenet = GetComponent<StatusComponent>();

    }
    protected override IEnumerator Defense()
    {
        currentTIme = 0;

        while (currentTIme <= skillData.StructSkillData.time[0])
        {
            startPos = transform.position - Vector3.up * 1.5f;
            RaycastHit hit;
            if (Physics.Raycast(startPos, direction, out hit, distance, mask))
            {
                RaycastHit[] hits = Physics.RaycastAll(startPos, direction, 50, mask);
                PlayEffect(EffectPos.Upper, particle[0], Vector3.zero);
                for (int i = 0; i < hits.Length; i++)
                {
                    Rigidbody other = hits[i].collider.GetComponent<Rigidbody>();
                    int force = skillData.StructSkillData.abilityValue[0];
                    other.velocity = Vector3.up * force;
                    defenseCount += 1;
                }
                break;
            }
            currentTIme += Time.deltaTime;
            yield return null;
        }
        isRun = null;
        isUp();

    }

    private void isUp()
    {
        if(defenseCount > skillData.StructSkillData.abilityValue[1])
        {
            PlayEffect(EffectPos.Lower, particle[1], Vector3.zero);
            playerComponenet.Heal(skillData.StructSkillData.abilityValue[2]);
        }
    }
}
