using System;
using UnityEngine;
using UnityEngine.Events;
[Serializable]
public struct StructSkill
{
    public int[] abilityValue;
    public int[] gaugeRaiseValue;
    public float[] time;
    public GameObject[] effect;
    public Sprite buttonImage;
    public Sprite FillImage;
    public string SkillActionName;
}