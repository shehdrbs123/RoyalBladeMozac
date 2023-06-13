using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ImageTest : MonoBehaviour
{
    // Start is called before the first frame update
    public Image image;
    public Image.FillMethod method;
    public float test=0;
    void Start()
    {
        image.fillMethod = method;
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(image.fillAmount);
        image.fillAmount = test;
    }

}
