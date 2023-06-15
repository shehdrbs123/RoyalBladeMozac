using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(SkillContainer),typeof(StatusComponent))]
public class Equipment : MonoBehaviour
{
    //pet, left. right   ¼ø
    [SerializeField] private ItemData[] Equips;
    [SerializeField] private ItemData DefaultItem;

    [SerializeField] private Transform[] weaponPos;

    private SkillContainer skillCon;
    private StatusComponent status;

    private void Awake()
    {
        skillCon = GetComponent<SkillContainer>();
        status = GetComponent<StatusComponent>();
    }

    private void Start()
    {
        for (int i = 0; i < Equips.Length; i++)
        {
            Equip(Equips[i]);
        }
    }
    public void Equip(ItemData equipedItem)
    {
        SkillData normal = equipedItem.sItemData.normalSkill;
        SkillData power = equipedItem.sItemData.powerSKill;
        ItemPos pos = equipedItem.sItemData.itempos;
        GameObject obj = equipedItem.sItemData.weaponPrefab;

        skillCon.ChangeSkill((int)pos, normal, power);
        StructStatus temp = equipedItem.sItemData.stat;
        status.AdjustMaxStatus(ref temp);

        if (obj)
        {
            GameObject spawnedObj = Instantiate(obj);
            spawnedObj.transform.SetParent(gameObject.transform);
            spawnedObj.transform.position = weaponPos[(int)pos].position;
            spawnedObj.transform.rotation = weaponPos[(int)pos].rotation;
        }
    }
}
