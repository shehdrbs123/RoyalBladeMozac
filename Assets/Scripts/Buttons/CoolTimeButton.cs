using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoolTimeButton : MonoBehaviour
{
    
    [SerializeField] private Image guage;
    [SerializeField] private ButtonPos buttonPos;

    private SkillAction normalSkill;
    private float currentCoolTime;
    private bool isCanUse;
    private void Start()
    {
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        SkillContainer skillCon = player.GetComponent<SkillContainer>();
        normalSkill = skillCon.normalSkillAction[(int)buttonPos];
        isCanUse = true;
    }
    public void Run()
    {
        if (GameManager.Instance.isGameOver)
            return;
        if (isCanUse)
        {
            int temp;
            float duration;
            normalSkill.execute(out temp, out duration);
            isCanUse = false;
            currentCoolTime = 0;
            StartCoroutine(coolTime(duration));
        }
    }

    IEnumerator coolTime(float duration)
    {
        while (currentCoolTime <= duration)
        {
            currentCoolTime += Time.deltaTime;
            guage.fillAmount = currentCoolTime / duration;
            yield return null;
        }
        guage.fillAmount = 0;
        isCanUse = true;
    }
}
