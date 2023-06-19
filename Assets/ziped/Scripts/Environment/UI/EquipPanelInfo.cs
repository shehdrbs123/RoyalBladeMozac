using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Text;

public class EquipPanelInfo : MonoBehaviour
{
    [SerializeField]
    private ItemData item;

    [SerializeField] private Text Infos;
    [SerializeField] private Image itemImage;
    [SerializeField] private Image ItemNormalSkill;
    [SerializeField] private Image ItemPowerSKill;

    void Start()
    {
        Init();
    }

    private void Init()
    {
        StringBuilder sb = new StringBuilder();

        sb.Append("�̸� :").Append(item.sItemData.ItemName)
            .Append("\n���ݷ� :").Append(item.sItemData.stat.damagePoint.ToString())
            .Append("\n�߰������ :").Append(item.sItemData.stat.hp.ToString())
            .Append("\n���� :").Append(item.sItemData.itempos.ToString());
        Infos.text = sb.ToString();
        itemImage.sprite = item.sItemData.Item;
        ItemNormalSkill.sprite = item.sItemData.normalSkill.StructSkillData.buttonImage;
        if(item.sItemData.powerSKill.StructSkillData.buttonImage != null)
            ItemPowerSKill.sprite = item.sItemData.powerSKill.StructSkillData.buttonImage;
    }

    public void Equip()
    {
        EquipManager.Instance.Equip(item);
    }
}           
