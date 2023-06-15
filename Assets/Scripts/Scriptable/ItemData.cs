using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="ItemData",menuName ="Scriptable Object/ItemData",order = int.MaxValue)]
public class ItemData : ScriptableObject
{
    //�ν����Ϳ����� ������ ����������, 
    // ��Ÿ�� ȯ�濡���� ������ �Ұ����ϰ� ���Ƴ���
    [SerializeField]
    private StructItem sitemData;
    public StructItem sItemData { get { return sitemData; } }

}
