using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EquipManager : MonoBehaviour
{
    private static EquipManager instance = null;
    [SerializeField]
    private ItemData[] DefaultItems;
    public GameObject player { private set; get; }

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
        }

    }
    public static EquipManager Instance
    {
        get
        {
            if (null == instance)
            {
                return null;
            }
            return instance;
        }
    }
    void Start()
    {
        player = GameManager.Instance.player;
        for(int i=0;i<DefaultItems.Length; i++)
        {
            Equip(DefaultItems[i]);
        }
    }

    public void Equip(ItemData item)
    {
        player.GetComponent<Equipment>().Equip(item);
    }
}
