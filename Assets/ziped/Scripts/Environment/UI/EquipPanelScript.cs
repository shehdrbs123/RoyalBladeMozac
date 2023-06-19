using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EquipPanelScript : MonoBehaviour
{
    public void Equip(ItemData itemInfo)
    {
        EquipManager.Instance.Equip(itemInfo);
    }
}
