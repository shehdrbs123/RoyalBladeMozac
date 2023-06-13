using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public abstract class SkillAction : MonoBehaviour
{
    [SerializeField]
    protected SkillData skillData;
    public SkillData SkillData { set { skillData = value; } }

    // Start is called before the first frame update
    public void init(SkillData _skillData)
    {
        SkillData = _skillData;
    }
    public abstract void execute(out int gaugeRate);
}
