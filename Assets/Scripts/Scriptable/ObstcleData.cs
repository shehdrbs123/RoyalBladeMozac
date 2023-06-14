using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName ="ObstacleData",menuName ="Scriptable Object/ObstacleData",order = int.MaxValue)]
public class ObstcleData : StatusData
{ 

    [SerializeField]
    private int scorePoint;
    public int ScorePoint { get { return scorePoint; } }

    [SerializeField]
    private Mesh obstacleMesh;
    public Mesh ObstacleMesh { get { return obstacleMesh; } }


}
