using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Events;

public class SliderButton : MonoBehaviour, IPointerClickHandler,IPointerExitHandler
{
    public UnityEvent OnRelease;
    public void OnPointerClick(PointerEventData eventData)
    {
        OnRelease.Invoke();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if(Input.GetMouseButton(0))
        {
            OnRelease.Invoke();
        }
    }
}
