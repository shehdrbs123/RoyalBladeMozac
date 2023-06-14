using System.Collections;
using UnityEngine;


public class SkillActionPowerUp : SkillAction
{
    StatusComponent playerStatus;
    // Start is called before the first frame update
    protected override void Awake()
    {
        base.Awake();
        playerStatus = GetComponent<StatusComponent>();
        
    }

    IEnumerator _PowerUp()
    {
        GameManager manager = GameManager.Instance;
        Debug.Log("DamageUp");
        manager.timeScaleModify(0.1f);
        particle[0].Play();
        yield return new WaitForSeconds(0.1f);
        manager.timeScaleModify(1f);
        particle[1].Play();

        // ´ëÃæ ÄíÄç

        playerStatus.CurrentStatus.damagePoint += skillData.StructSkillData.abilityValue[0];
        Invoke("EndReinforce", skillData.StructSkillData.time[0]);
    }

    private void EndReinforce()
    {
        playerStatus.CurrentStatus.damagePoint -= skillData.StructSkillData.abilityValue[0];
        particle[1].Stop();
    }

    public override void execute(out int gaugeRate,out float coolTime)
    {
        gaugeRate = 0;
        coolTime = 0;
        StartCoroutine(_PowerUp());
    }
}
