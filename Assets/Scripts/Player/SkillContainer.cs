using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;


public class SkillContainer : MonoBehaviour
{
    [SerializeField]
    private SkillData[] normalSkill;
    [SerializeField]
    public SkillAction[] normalSkillAction { private set; get; }

    [SerializeField]
    private SkillData[] powerSkill;
    [SerializeField]
    public SkillAction[] powerSkillAction { private set; get; }
    private void Awake()
    {
        normalSkillAction = new SkillAction[normalSkill.Length];
        powerSkillAction = new SkillAction[powerSkill.Length];
        Init();
    }
    public void Init()
    {
        skillInit(normalSkill, normalSkillAction);
        skillInit(powerSkill, powerSkillAction);
    }

    public void RemoveComponent(int whatSkill)
    {
        Destroy(normalSkillAction[whatSkill]);
        Destroy(powerSkillAction[whatSkill]);
    }

    private void skillInit(SkillData[] data, SkillAction[] skillActions)
    {
        for (int i = 0; i < data.Length; i++)
        {
            string skillName = data[i].StructSkillData.SkillActionName;
            Type t = Type.GetType(skillName);
#if UNITY_EDITOR
            Debug.Log(t.Name);
#endif
            skillActions[i] = gameObject.AddComponent(t) as SkillAction;
            skillActions[i].init(data[i]);
        }
    }
}
