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


    protected ParticleSystem[] particle;

    // Start is called before the first frame update
    protected virtual void Awake() { }
    protected virtual void Start()
    {
        if (skillData.StructSkillData.effect.Length == 0)
            return;
        particle = new ParticleSystem[skillData.StructSkillData.effect.Length];
        for (int i = 0; i < particle.Length; i++)
        {
            GameObject psObject = Instantiate(skillData.StructSkillData.effect[i], transform);
            psObject.transform.position = transform.position;
            particle[i] = psObject.GetComponent<ParticleSystem>();
        }
    }
    public void init(SkillData _skillData)
    {
        SkillData = _skillData;
    }
    public abstract void execute(out int gaugeRate);
}
