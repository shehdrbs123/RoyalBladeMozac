using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// null을 대신할 skillAction;
/// </summary>
public class SkillActionNone : SkillAction
{
    public override void execute(out int gaugeRate, out float coolTime)
    {
        gaugeRate = 0;
        coolTime = 0;
    }
}
