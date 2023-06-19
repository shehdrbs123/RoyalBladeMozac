using System;
using System.Collections.Generic;
using UnityEngine;

public class AttackableManager : MonoBehaviour
{
    public HashSet<StatusComponent> AttackList = new HashSet<StatusComponent>();

    public void OnTriggerEnter(Collider other)
    {
        StatusComponent stat = other.gameObject.GetComponent<StatusComponent>();

        if (stat)
        {
#if UNITY_EDITOR
            Debug.Log(String.Format("{0} is Added", stat.name));
#endif
            AttackList.Add(stat);
        }

    }

    public void OnTriggerExit(Collider other)
    {
        StatusComponent stat = other.gameObject.GetComponent<StatusComponent>();

        if (stat)
        {
            Remove(stat);
        }
    }

    public void Remove(StatusComponent stat)
    {
#if UNITY_EDITOR
        Debug.Log(String.Format("{0} is Removed", stat.name));
#endif
        AttackList.Remove(stat);
    }
    public HashSet<StatusComponent> GetList()
    {
        return AttackList;
    }

    public bool Damage(int applyedDamage)
    {
        bool isDied = false;
        List<StatusComponent> dieList = new List<StatusComponent>();
        foreach (var target in GetList())
        {
            target.ApplyDamage(applyedDamage, Color.red);

            if (!target.isActiveAndEnabled)
                dieList.Add(target);
        }

        if (dieList.Count > 0)
        {
            isDied = true;
        }


        while (dieList.Count > 0)
        {
            int last = dieList.Count - 1;
            StatusComponent died = dieList[last];
            Remove(died);
            dieList.RemoveAt(last);
        }
        return isDied;
    }

    
}
