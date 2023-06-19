using UnityEngine;
using System;
/// <summary>
/// ��ų�� �ൿ�� ������ Ŭ����
/// SkillData�� scriptable Ŭ������ ���� �����͸� �޾� ����ȴ�
/// ������ ������ �������� �־ ������, scriptable object �ۼ��� ��ų ������
/// </summary>
[RequireComponent(typeof(EffectManager))]
[Serializable]
public abstract class SkillAction : MonoBehaviour
{
    [SerializeField]
    protected SkillData skillData;
    public SkillData SkillData { set { skillData = value; } get { return skillData; } }
    private EffectManager effecter;
    [SerializeField]
    protected GameObject[] particle;

    // Start is called before the first frame update
    protected virtual void Awake() {
        effecter = GetComponent<EffectManager>();
    }
    protected virtual void Start()
    {
        if (skillData.StructSkillData.effect.Length == 0)
            return;
        particle = new GameObject[skillData.StructSkillData.effect.Length];
        for (int i = 0; i < particle.Length; i++)
        {
            GameObject psObject = Instantiate(skillData.StructSkillData.effect[i], transform);
            psObject.transform.position = transform.position;
            particle[i] = psObject;
        }
    }
    public void init(SkillData _skillData)
    {
        SkillData = _skillData;
    }
    public abstract void execute(out int gaugeRate, out float coolTime);

    public void PlayEffect(EffectPos pos, GameObject particle, Vector3 rotation)
    {
        effecter.PlayEffect(pos, particle, rotation);
    }
    public void StopEffect(GameObject particle)
    {
        particle.GetComponent<ParticleSystem>().Stop();
    }
    protected virtual void OnDisable()
    {
        if(particle != null)
            foreach (var tmp in particle)
            {
                Destroy(tmp);
            }
    }
}
