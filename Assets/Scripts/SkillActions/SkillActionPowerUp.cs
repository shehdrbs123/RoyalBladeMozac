using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class SkillActionPowerUp : SkillAction
{
    StatusComponent playerStatus;
    ParticleSystem[] particle;
    // Start is called before the first frame update
    private void Awake()
    {
        playerStatus = GetComponent<StatusComponent>();
        
    }
    private void Start()
    {
        particle = new ParticleSystem[skillData.StructSkillData.effect.Length];
        for (int i = 0; i < particle.Length; i++)
        {
            GameObject psObject = Instantiate(skillData.StructSkillData.effect[i], transform);
            psObject.transform.position = transform.position;
            //psObject.transform.rotation = //Quaternion.Euler(-90, 0, 0);
            particle[i] = psObject.GetComponent<ParticleSystem>();
        }
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

    public override void execute(out int gaugeRate)
    {
        gaugeRate = 0;
        StartCoroutine(_PowerUp());
    }
}
