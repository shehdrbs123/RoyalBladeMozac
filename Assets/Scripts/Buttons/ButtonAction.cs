using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEditor;
using System;

public enum SkillPos
{ 
    Jump=0, 
    Guard, 
    Attack,
    E_Max
}


public class ButtonAction : MonoBehaviour
{
    [SerializeField] private Slider gauge;
    [SerializeField] private Slider skillSlider;
    [SerializeField] private Button skillButton;
    [SerializeField] private SkillPos buttonType;

    private SkillAction normalSkill;
    private SkillAction PowerSkill;
   
    private int gaugeValue = 30;

    private void Start()
    {
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        SkillContainer skillCon  = player.GetComponent<SkillContainer>();
        normalSkill = skillCon.normalSkillAction[(int)buttonType];
        PowerSkill = skillCon.powerSkillAction[(int)buttonType];
    }
    public void Press()
    {
        normalSkill.execute(out gaugeValue);
    }

    public void GaugeUp()
    {
        gauge.value += gaugeValue;
    }

    public void ifSkillGaugeFull()
    {
        if(gauge.value >=gauge.maxValue)
        {
            gauge.SetValueWithoutNotify(0);
            skillButton.gameObject.SetActive(false);
            skillSlider.gameObject.SetActive(true);
        }
    }

    public void ifSkillSliderFull()
    {
        if (skillSlider.value >= skillSlider.maxValue-10)
        {
            skillSlider.SetValueWithoutNotify(0);
            skillButton.gameObject.SetActive(true);
            skillSlider.gameObject.SetActive(false);
            PowerSkill.execute(out gaugeValue);
        }
        else
        {
            skillSlider.SetValueWithoutNotify(0);
        }
    }
}
