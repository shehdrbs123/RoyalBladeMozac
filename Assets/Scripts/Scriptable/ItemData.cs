using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="ItemData",menuName ="Scriptable Object/ItemData",order = int.MaxValue)]
public class ItemData : ScriptableObject
{
    //인스펙터에서는 수정이 가능하지만, 
    // 런타임 환경에서는 수정이 불가능하게 막아놓음
    [SerializeField]
    private StructItem sitemData;
    public StructItem sItemData { get { return sitemData; } }

}
