[AutoStartup]
Measure=Calc
Formula=Counter
IfCondition=(AutoStartup=1)
IfTrueAction=[!Zpos 1][!Zpos #PopoutZpos#]
OnUpdateAction=[!Zpos 1]
DynamicVariables=1
UpdateDivider=-1