using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageText : MonoBehaviour
{
    
    private WaitForSeconds wait;
    [SerializeField]
    private float waitTime;

    private void Awake()
    {
        wait = new WaitForSeconds(waitTime);
    }
    public void OnEnable()
    {
        StartCoroutine(TextOperation());
    }

    IEnumerator TextOperation()
    {
        yield return wait;
        DamageTextManager.Instance.ReturnText(gameObject);
    }

}
