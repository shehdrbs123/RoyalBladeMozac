using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;

public class ExtendsButton : Selectable, IPointerClickHandler,IPointerMoveHandler
{
    [Serializable]
    public class ButtonClickedEvent : UnityEvent { }

    [FormerlySerializedAs("onClick")]
    [SerializeField]
    private ButtonClickedEvent m_OnClick = new ButtonClickedEvent();

    private Vector3 prePosition;
    private Vector3 worldPosition;
    [SerializeField] private float rangeY;

    public ButtonClickedEvent onClick
    {
        get { return m_OnClick; }
        set { m_OnClick = value; }
    }

    private void Press()
    {
        if (!IsActive() || !IsInteractable())
            return;

        UISystemProfilerApi.AddMarker("Button.onClick", this);
        m_OnClick.Invoke();
    }

    public virtual void OnPointerClick(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left)
            return;

        Press();
    }

    public override void OnPointerDown(PointerEventData eventData)
    {
        base.OnPointerDown(eventData);
        prePosition = transform.localPosition;
        worldPosition = transform.position;
    }

    public void OnPointerMove(PointerEventData eventData)
    {
        if (Input.GetMouseButton(0))
        {

            Vector3 UIPos = transform.position;
            Vector3 point = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            float y = Mathf.Clamp(point.y,worldPosition.y,worldPosition.y+ rangeY);

            Vector3 pos = new Vector3(UIPos.x, y, point.z+1);
            
            transform.position = pos;
        }
    }

    public override void OnPointerExit(PointerEventData eventData)
    {
        base.OnPointerExit(eventData);
        
    }

    public override void OnPointerUp(PointerEventData eventData)
    {
        base.OnPointerUp(eventData);
        SetDefaultPos();
    }

    private void SetDefaultPos()
    {
        transform.localPosition = prePosition;
    }

    

   
}
