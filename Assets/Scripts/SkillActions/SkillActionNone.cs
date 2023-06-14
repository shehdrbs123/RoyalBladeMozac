using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkillActionNone : SkillAction
{
    public override void execute(out int gaugeRate, out float coolTime)
    {
        gaugeRate = 0;
        coolTime = 0;
    }
}
