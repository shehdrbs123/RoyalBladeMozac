using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkillActionNone : SkillAction
{
    public override void execute(out int gaugeRate)
    {
        gaugeRate = 0;
    }
}
