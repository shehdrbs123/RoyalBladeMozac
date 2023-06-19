using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName ="SKill",menuName ="Scriptable Object/SkillData",order = int.MaxValue)]
public class SkillData : ScriptableObject
{
    [SerializeField]
    private StructSkill structSkillData;
    public StructSkill StructSkillData { get { return structSkillData; } }
}
