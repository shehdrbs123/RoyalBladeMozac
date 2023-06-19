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

    public Action<SkillAction, SkillAction>[] OnSkillChange;
    private void Awake()
    {
        normalSkillAction = new SkillAction[normalSkill.Length];
        powerSkillAction = new SkillAction[powerSkill.Length];
        OnSkillChange = new Action<SkillAction, SkillAction>[normalSkill.Length];
        Init();
    }
    public void Init()
    {
        // �ʹݿ� �ݹ� �޼ҵ尡 ��ϵǾ����� ���� �� ������.
        // �и��ؼ� ����.....
        InitSkill(normalSkill, normalSkillAction);
        InitSkill(powerSkill, powerSkillAction);
    }

    

    private void InitSkill(SkillData[] data, SkillAction[] skillActions)
    {
        for (int i = 0; i < data.Length; i++)
        {
            skillActions[i] = CreateComponent(data[i]);
            OnSkillChange[i] = (x, y) =>
            {
#if UNITY_EDITOR
                Debug.Log(String.Format("��ų�� {0},{1}�� ��ü�Ǿ����ϴ�", nameof(x), nameof(y)));
#endif
            };
        }
    }

    public void ChangeSkill(int whatSkill, SkillData _normalSkill, SkillData _powerSkill)
    {
        RemoveComponent(whatSkill);

        normalSkill[whatSkill] = _normalSkill;
        powerSkill[whatSkill] = _powerSkill;
        normalSkillAction[whatSkill] = CreateComponent(_normalSkill);
        powerSkillAction[whatSkill] = CreateComponent(_powerSkill);

        OnSkillChange[whatSkill](normalSkillAction[whatSkill],powerSkillAction[whatSkill]);
    }

    private SkillAction CreateComponent(SkillData data)
    {
        string skillName = data.StructSkillData.SkillActionName;
        Type t = Type.GetType(skillName);
        SkillAction skill = gameObject.AddComponent(t) as SkillAction;
        skill.init(data);
        return skill;
    }

    private void RemoveComponent(int whatSkill)
    {
        Destroy(normalSkillAction[whatSkill]);
        Destroy(powerSkillAction[whatSkill]);
    }
}
