using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName ="ObstacleData",menuName ="Scriptable Object/ObstacleData",order = int.MaxValue)]
public class ObstcleData : StatusData
{ 
    [SerializeField]
    private StructObstacle _obstacleData;
    public StructObstacle obstcleData { get { return _obstacleData; } }
}
