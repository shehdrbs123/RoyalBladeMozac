using System;
using UnityEngine;

public enum ItemPos
{
    Pet=0, 
    Shield, 
    Weapon, 
    
    E_Max
}
[Serializable]
public struct StructItem
{
    public StructStatus stat;   
    public GameObject weaponPrefab;
    public SkillData normalSkill;
    public SkillData powerSKill;
    public ItemPos itempos;

}
