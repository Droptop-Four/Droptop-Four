[Variables]
Scale=3

; Shadow=240, 240, 255
Outline0=42,109,155
Fill0=255,255,255
Wave0=224,144,40

Outline1=59, 110, 20
Fill1=96, 165, 41
Wave1=240, 240, 255

Installer=0

OffsetX=-68.583984
OffsetY=-60
Offset=(#OffsetX#),(#OffsetY#)

WaveLength=40
WaveAmplitude=23

SkinWidth=(119 * #Scale#)
SkinHeight=(136 * #Scale#)

[bg]
Meter=Image
W=#SkinWidth#
H=#SkinHeight#
MouseOverAction=[!SetVariable Installer 1][!UpdateMeterGroup Logo][!Redraw]
MouseLeaveAction=[!SetVariable Installer 0][!UpdateMeterGroup Logo][!Redraw]

[Cycle]
Measure=Loop
EndValue=360
UpdateDivider=1
OnUpdateAction=[!UpdateMeasureGroup Wave][!UpdateMeter Wave]
[WaveX]
Measure=Calc
Formula=(((Cycle) / 360) * -#WaveLength#) 
Group=Wave
[WaveY]
Measure=Calc
Formula=(((Cycle) / 360) * #WaveAmplitude#) 
Group=Wave

[Box]
Meter=Shape
Shape = Path OuterBox | fill color [#Outline[#Installer]] | Extend Mods
Shape2 = Path InnerBox | Fill Color [#Fill[#Installer]] | Extend Mods
Shape3 = Path Tape | fill color [#Outline[#Installer]] | Extend Mods
Mods = StrokeWidth 0 | Offset #Offset# 
OuterBox = 126.01563, 60.5625 | LineTo 70.589844, 92.5625 | ArcTo 68.605469, 96, 3.9691469, 3.9691469, 0, 1, 0 | LineTo 68.605469, 160 | ArcTo 70.589844, 163.4375, 3.9691469, 3.9691469, 0, 1, 0 | LineTo 126.01563, 195.4375 | ArcTo 129.98437, 195.4375, 3.9691469, 3.9691469, 0, 1, 0 | LineTo 185.41016, 163.4375 | ArcTo 187.39453, 160, 3.9691469, 3.9691469, 0, 1, 0 | LineTo 187.39453, 96 | ArcTo 185.41016, 92.5625, 3.9691469, 3.9691469, 0, 1, 0 | LineTo 129.98437, 60.5625 | ArcTo 126.01563, 60.5625, 3.9691469, 3.9691469, 0, 1, 0 | ClosePath 1 
InnerBox = 128, 68.583984 | LineTo 179.45703, 98.291016 | LineTo 179.45703, 157.70898 | LineTo 128, 187.41797 | LineTo 76.542969, 157.70898 | LineTo 76.542969, 98.291016 | ClosePath 1
Tape = 156.74023, 76.166016 | ArcTo 153.72852, 76.5625, 3.96875, 3.96875, 0, 1, 0 | LineTo 98.302734, 108.5625 | ArcTo 96.318359, 112, 3.9691469, 3.9691469, 0, 1, 0 | LineTo 96.318359, 144 | ArcTo 100.28711, 147.96875, 3.96875, 3.96875, 0, 1, 0 | ArcTo 104.25586, 144, 3.96875, 3.96875, 0, 1, 0 | LineTo 104.25586, 114.29102 | LineTo 157.69727, 83.4375 | ArcTo 159.15039, 78.015625, 3.96875, 3.96875, 0, 1, 0 | ArcTo 156.74023, 76.166016, 3.96875, 3.96875, 0, 1, 0 | ClosePath 1
TransformationMatrix=#Scale#; 0; 0; #Scale#; 0; 0
Group=Logo
DynamicVariables=1

[Wave]
Meter=Shape
Group=Logo
Shape = Path Path1 | fill color [#Wave[#Installer]] | Extend Mods,Installer[#Installer] | Offset (#OffsetX# + [&WaveX]),(#OffsetY# + [&WaveY])
Mods = StrokeWidth 0 | Offset #Offset#
Path1 = 256.15646, 86.052112 | CurveTo 235.97784, 97.702047, 256.15646, 86.052112, 250.31959, 100.38947 | CurveTo 216.13306, 109.10652, 221.46934, 95.110892, 216.13306, 109.10652 | CurveTo 195.95445, 120.75645, 216.13306, 109.10652, 210.29619, 123.44388 | CurveTo 176.10966, 132.16093, 181.44594, 118.1653, 176.10966, 132.16093 | CurveTo 155.93105, 143.81086, 176.10966, 132.16093, 170.27279, 146.49828 | CurveTo 136.08575, 155.21533, 141.42255, 141.2197, 136.08575, 155.21533 | CurveTo 115.90766, 166.86527, 136.08575, 155.21533, 130.2494, 169.55269 | CurveTo 96.062352, 178.26974, 101.39915, 164.27411, 96.062352, 178.26974 | CurveTo 75.883741, 189.91967, 96.062352, 178.26974, 90.225483, 192.6071 | CurveTo 56.038956, 201.32414, 61.375234, 187.32852, 56.038956, 201.32414 | LineTo 56.038956, 223.4892 | LineTo 256.15646, 108.16394 | ClosePath 1
Shape2 = Path WaveContainer | Extend Mods
WaveContainer = 136.08602, 133.2817 | LineTo 176.10948, 110.17414 | LineTo 176.10948, 154.27381 | LineTo 136.08602, 177.38137 | ClosePath 1
Shape3 = Combine Shape | Intersect Shape2
Installer0=
Installer1=StrokeWidth 6 | Stroke Color [#Outline[#Installer]]
TransformationMatrix=#Scale#; 0; 0; #Scale#; 0; 0
DynamicVariables=1
