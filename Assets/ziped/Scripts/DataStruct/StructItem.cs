using System;
using UnityEngine;
using UnityEngine.UI;
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
    public string ItemName;
    public StructStatus stat;   
    public GameObject weaponPrefab;
    public SkillData normalSkill;
    public SkillData powerSKill;
    public ItemPos itempos;
    public Sprite Item;

}
