[Spotify_Web_Player-Cariboudjan.Style]
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)

[Spotify_Web_Player-Cariboudjan]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
MouseScrollUpAction=[!CommandMeasure "MeasureWin7Audio" "ChangeVolume +#VolumeSliderSteps#"][!Delay 100][!UpdateMeasureGroup VolumeSys][!UpdateMeter VolumeIcon][!Redraw]
MouseScrollDownAction=[!CommandMeasure "MeasureWin7Audio" "ChangeVolume -#VolumeSliderSteps#"][!Delay 100][!UpdateMeasureGroup VolumeSys][!UpdateMeter VolumeIcon][!Redraw]