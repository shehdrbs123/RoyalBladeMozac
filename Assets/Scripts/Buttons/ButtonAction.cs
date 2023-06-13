using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public enum ButtonType
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
    [SerializeField] private ButtonType buttonType;

    private SkillAction test;
    private int gaugeValue = 30;

    private void Start()
    {
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        test = player.GetComponent<StatusComponent>().skillActions[(int)buttonType] as SkillAction;

    }
    public void Press()
    {
        test.execute(out gaugeValue);
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
        if (skillSlider.value >= skillSlider.maxValue-5)
        {
            skillSlider.SetValueWithoutNotify(0);
            skillButton.gameObject.SetActive(true);
            skillSlider.gameObject.SetActive(false);
            // PowerSkill
        }
        else
        {
            skillSlider.SetValueWithoutNotify(0);
        }
    }
}
