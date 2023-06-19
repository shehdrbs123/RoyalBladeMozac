using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Events;

public class SliderButton : MonoBehaviour, IPointerClickHandler, IPointerExitHandler
{
    public UnityEvent OnRelease;
    public UnityEvent OnExit;
    public void OnPointerClick(PointerEventData eventData)
    {
        OnRelease.Invoke();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        StartCoroutine(returnHandleCoroutine());
    }
    IEnumerator returnHandleCoroutine()
    {
        while(Input.GetMouseButton(0))
            yield return null;

        OnExit.Invoke();
    }
}
