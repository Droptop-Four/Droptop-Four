[Rainmeter]

[Variables]
NumberOfItems=3
NumberOfDividers=1

FolderLoc=C:\Users\Carib\Documents\Rainmeter\Skins\Droptop Folders\Control\Advanced controls
ParentConfig=Droptop\Other\Folders\Folder01

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
Text=#PopupMenuFolders1#
LeftMouseDownAction=[!Hide][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig]["[#FolderLoc]"]

[1Icon]
ImageName=#@#Icons\Fixed\#IconSize#\folder.png

;---

[Divider1]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#*1)+(#DividerSpace#*2))r

;---

[2]
Text=#PopupMenuFolders3#
LeftMouseDownAction=[!Hide][!HideGroup Folders][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig][!CommandMeasure mIndex[#PopupModuleIndex]Name "Properties" "#ParentConfig#"]"]
Y=(#DropdownIconYoffset#+((#DropdownItemHeight#*1)+(#DropdownItemHeight#/2)+#DividerHeight#+(#DividerSpace#*2))+#DropdownItemYOffset#)

[2Icon]
ImageName=#@#Icons\Fixed\#IconSize#\type.png
Y=[2:Y]

[3]
Text=#PopupMenuFolders4#
LeftMouseDownAction=[!Hide][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig][!CommandMeasure mIndex[#PopupModuleIndex]Name "ContextMenu" "#ParentConfig#"]

[3Icon]
ImageName=#@#Icons\Fixed\#IconSize#\list.png

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
