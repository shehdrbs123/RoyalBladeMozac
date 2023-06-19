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
    [SerializeField] private GameObject[] EquipedObject;

    private SkillContainer skillCon;
    private StatusComponent status;

    private void Awake()
    {
        skillCon = GetComponent<SkillContainer>();
        status = GetComponent<StatusComponent>();
        EquipedObject = new GameObject[weaponPos.Length];
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
        int pos = (int)equipedItem.sItemData.itempos;

        if (Equips[pos] == equipedItem)
            return;
        UnEquip(pos);

        SkillData normal = equipedItem.sItemData.normalSkill;
        SkillData power = equipedItem.sItemData.powerSKill;
        GameObject obj = equipedItem.sItemData.weaponPrefab;
        
        skillCon.ChangeSkill(pos, normal, power);
        StructStatus temp = equipedItem.sItemData.stat;
        status.AddReinforce(ref temp);
        
        if (obj)
        {
            GameObject spawnedObj = Instantiate(obj, weaponPos[pos]);
            EquipedObject[pos] = spawnedObj;
        }
        Equips[pos] = equipedItem;
    }
    public void UnEquip(int idx)
    {
        StructStatus temp = Equips[idx].sItemData.stat;
        temp.hp *= -1;
        temp.damagePoint *= -1;
        status.AddReinforce(ref temp);
        if (EquipedObject[idx])
            Destroy(EquipedObject[idx]);
    }
}
