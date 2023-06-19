using System.Collections;
using UnityEngine;

/// <summary>
/// 스킬 사용 시 일정 시간 동안 데미지가 증가하는 스킬
/// ability 0번은 얼마나 데미지가 증가할지
/// particle 0번 사용 시 이펙트
/// particle 1번 유지 중 이펙트
/// time 0번 유지시간
/// </summary>
public class SkillActionPowerUp : SkillAction
{
    StatusComponent playerStatus;

    private StructStatus reInforceValue = new StructStatus();
    // Start is called before the first frame update
    protected override void Awake()
    {
        base.Awake();
        playerStatus = GetComponent<StatusComponent>();
       
    }

    protected override void Start()
    {
        base.Start();
        reInforceValue = new StructStatus();
        reInforceValue.damagePoint = skillData.StructSkillData.abilityValue[0];
    }
    
    IEnumerator _PowerUp()
    {
        GameManager manager = GameManager.Instance;
        Debug.Log("DamageUp");
        manager.timeScaleModify(0.1f);
        PlayEffect(EffectPos.Mid, particle[0], Vector3.zero);
        yield return new WaitForSeconds(0.1f);

        manager.timeScaleModify(1f);
        PlayEffect(EffectPos.Mid, particle[1], Vector3.zero);

        // 대충 쿠쾅

        playerStatus.AddReinforce(ref reInforceValue);
        Invoke("EndReinforce", skillData.StructSkillData.time[0]);
    }

    private void EndReinforce()
    {
        StructStatus tmp = reInforceValue;
        tmp.damagePoint *= -1;
        playerStatus.AddReinforce(ref tmp);
        StopEffect(particle[1]);
    }

    public override void execute(out int gaugeRate,out float coolTime)
    {
        gaugeRate = 0;
        coolTime = 0;
        StartCoroutine(_PowerUp());
    }
}
