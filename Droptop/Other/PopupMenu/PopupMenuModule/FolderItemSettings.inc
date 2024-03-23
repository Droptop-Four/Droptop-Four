[Rainmeter]

[Variables]
NumberOfItems=4
NumberOfDividers=1

FolderLoc=C:\Users\Carib\Documents\Rainmeter\Skins\Droptop Folders\PinnedApps
ParentConfig=Droptop\Other\Folders\Folder1

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

[2]
Text=#PopupMenuFolders2#
LeftMouseDownAction=[!Hide][!WriteKeyValue Variables CycleFolder [#PopupModuleIndex2] "#SKINSPATH#Droptop\Other\BackgroundProcesses\Tasks\ToggleFolders.ini"][!ActivateConfig "Droptop\Other\BackgroundProcesses\Tasks" "ToggleFolders.ini"][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig]

[2Icon]
ImageName=#@#Icons\Fixed\#IconSize#\refresh.png

;---

[Divider1]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#*2)+(#DividerSpace#*2))r

;---

[3]
Text=#PopupMenuFolders3#
LeftMouseDownAction=[!Hide][!HideGroup Folders][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig][!CommandMeasure mIndex[#PopupModuleIndex]Name "Properties" "#ParentConfig#"]"]
Y=(#DropdownIconYoffset#+((#DropdownItemHeight#*2)+(#DropdownItemHeight#/2)+#DividerHeight#+(#DividerSpace#*2))+#DropdownItemYOffset#)

[3Icon]
ImageName=#@#Icons\Fixed\#IconSize#\type.png
Y=[3:Y]

[4]
Text=#PopupMenuFolders4#
LeftMouseDownAction=[!Hide][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig][!CommandMeasure mIndex[#PopupModuleIndex]Name "ContextMenu" "#ParentConfig#"]

[4Icon]
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
