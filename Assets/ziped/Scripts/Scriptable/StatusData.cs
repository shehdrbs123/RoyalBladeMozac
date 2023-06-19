using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="StatusData", menuName = "Scriptable Object/StatusData", order = int.MaxValue)]
public class StatusData : ScriptableObject
{
    [SerializeField]
    private StructStatus status;
    public StructStatus Status { get { return status; } }

}
