[Rainmeter]

[Variables]
NumberOfItems=2
NumberOfDividers=0

[PrepareLyricsSearch]
Measure=String
String=[#PlayerArtist[#PlayerTypeNum]]   [#PlayerTitle[#PlayerTypeNum]] lyrics
Substitute="&":"and",'"':""," -  lyrics":""
DynamicVariables=1

[PrepareWikiSearch]
Measure=String
String=[#PlayerArtist[#PlayerTypeNum]]
Substitute="&":"and",'"':""," ":"+"
DynamicVariables=1

[1]
Text=#PopupMenuVolume1.1#
LeftMouseDownAction=[!Hide]["https://www.google.com/search?q=[PrepareLyricsSearch]"][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig]

[1Icon]
ImageName=#@#Icons\Fixed\#IconSize#\lyrics.png

[2]
Text=#PopupMenuVolume1.2#
LeftMouseDownAction=[!Hide]["https://en.wikipedia.org/w/index.php?search=[PrepareWikiSearch]"][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig]

[2Icon]
ImageName=#@#Icons\Fixed\#IconSize#\wikipedia.png

;dummy
[1Arrow]
Meter=String
Hidden=1

[2Arrow]
Meter=String
Hidden=1

[3Arrow]
Meter=String
Hidden=1