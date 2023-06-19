using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum EffectPos
{
    Upper = 0,
    Lower,
    Mid,
    E_Max
}

public class EffectManager : MonoBehaviour
{
    
    [SerializeField]
    private Transform[] effectPosList;
    
    public void PlayEffect(EffectPos pos, GameObject particle,Vector3 rotation)
    {
        particle.transform.position = effectPosList[(int)pos].transform.position;
        particle.transform.rotation = Quaternion.Euler(rotation);
        particle.GetComponent<ParticleSystem>().Play();
    }
}
