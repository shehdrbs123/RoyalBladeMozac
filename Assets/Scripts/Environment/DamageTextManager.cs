using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DamageTextManager : MonoBehaviour
{

    private static DamageTextManager instance = null;
    [SerializeField]
    private GameObject D3TextPrefabs;
    private Queue<GameObject> textObjects;

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }

        textObjects = new Queue<GameObject>();
    }
    public static DamageTextManager Instance
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
    public void ShowDamageText(Vector3 pos, string text,Color color)
    {
        GameObject obj;
        if(!textObjects.TryDequeue(out obj))
        {
            obj = Instantiate(D3TextPrefabs);
        }
        obj.transform.position = pos + Vector3.back;
        Text texts = obj.GetComponentInChildren<Text>();
        texts.text = text;
        texts.color = color;
        obj.SetActive(true);
    }

    public void ReturnText(GameObject Text)
    {
        textObjects.Enqueue(Text);
        Text.SetActive(false);
    }
}
