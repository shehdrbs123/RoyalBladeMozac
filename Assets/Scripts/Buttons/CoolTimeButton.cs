using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoolTimeButton : MonoBehaviour
{
    
    [SerializeField] private Image guage;
    [SerializeField] private Image btnImage;
    [SerializeField] private ButtonPos buttonPos;

    private SkillAction normalSkill;
    private float currentCoolTime;
    private bool isCanUse;
    private void Start()
    {
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        SkillContainer skillCon = player.GetComponent<SkillContainer>();
        skillCon.OnSkillChange[(int)buttonPos] += ChangeSkill;
        isCanUse = true;
        
    }

    public void ChangeSkill(SkillAction normal, SkillAction power)
    {
        normalSkill = normal;
        IconChange();
    }

    private void IconChange()
    {
        SkillData data = normalSkill.SkillData;
        btnImage.sprite = normalSkill.SkillData.StructSkillData.buttonImage;
        guage.sprite = data.StructSkillData.FillImage;
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
