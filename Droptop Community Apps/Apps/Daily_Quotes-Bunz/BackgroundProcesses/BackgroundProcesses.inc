;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------
[MeasureWOTD]
Measure=Plugin
Plugin=WebParser
URL=https://www.wordsmith.org/awad/rss1.xml
RegExp=(?siU)<title>.*<title>(.*)</title>.*<description>(.*)</description>
UpdateRate=43200
FinishAction=[!SetVariable Word1 "[MeasureWord]" "Droptop\DropdownBar"][!ShowMeterGroup Box1Group "Droptop Community Apps\Apps\Daily_Quotes-Bunz"][!WriteKeyValue Variables Word1 "[MeasureWord]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!WriteKeyValue Variables Definition1 "[MeasureDefinition]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!UpdateMeter * "Droptop Community Apps\Apps\Daily_Quotes-Bunz"][!Update "Droptop Community Apps\Apps\Daily_Quotes-Bunz"][!UpdateMeterGroup CustomApp#Daily_Quotes-Bunz#Sys "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

[MeasureHistory]
Measure=Plugin
Plugin=WebParser
URL=https://feeds.feedburner.com/historyorb/todayinhistory
RegExp=(?siU)https://www.onthisday.com/events/date/(.*)".* - (.*)&lt;br&gt;
UpdateRate=43200
FinishAction=[!ShowMeterGroup Box2Group "Droptop Community Apps\Apps\Daily_Quotes-Bunz"][!WriteKeyValue Variables HistoryDate1 "[MeasureHistoryDate]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!WriteKeyValue Variables HistoryDesc1 "[MeasureHistoryDesc]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!UpdateMeter * "Droptop Community Apps\Apps\Daily_Quotes-Bunz"][!Update "Droptop Community Apps\Apps\Daily_Quotes-Bunz"]

[MeasureSite]
Measure=Plugin
Plugin=WebParser
URL=http://feeds.feedburner.com/brainyquote/QUOTEBR
RegExp=(?siU).*<title>(.*)</title>.*<link>(.*)</link>.*<description>(.*)</description>.*<pubDate>(.*)</pubDate>#GetQuote##GetQuote##GetQuote##GetQuote#
UpdateRate=43200
FinishAction=[!ShowMeterGroup Box3Group "Droptop Community Apps\Apps\Daily_Quotes-Bunz"][!WriteKeyValue Variables Quote1 "[MeasureQuote1]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!WriteKeyValue Variables Author1 "[MeasureAuthor1]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!WriteKeyValue Variables Quote2 "[MeasureQuote2]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!WriteKeyValue Variables Author2 "[MeasureAuthor2]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!WriteKeyValue Variables Quote3 "[MeasureQuote3]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!WriteKeyValue Variables Author3 "[MeasureAuthor3]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!WriteKeyValue Variables Quote4 "[MeasureQuote4]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!WriteKeyValue Variables Author4 "[MeasureAuthor4]" "#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Variables\Variables.inc"][!UpdateMeter * "Droptop Community Apps\Apps\Daily_Quotes-Bunz"][!Update "Droptop Community Apps\Apps\Daily_Quotes-Bunz"]


[MeasureLink]
Measure=Plugin
Plugin=Webparser
URL=[MeasureSite]
StringIndex=2

[MeasureAuthor1]
Measure=Plugin 
Plugin=WebParser
URL=[MeasureSite]
DecodeCharacterReference=1
StringIndex=5
; IfCondition=#QuoteNumber# > 3
; IfTrueAction=[!SetVariable QuoteNumber 1][!UpdateMeter * "Droptop Community Apps\Apps\Daily_Quotes-Bunz"][!Update]
; IfCondition2=#QuoteNumber# <= 0
; IfTrueAction2=[!SetVariable QuoteNumber 3][!UpdateMeter * "Droptop Community Apps\Apps\Daily_Quotes-Bunz"][!Update]
DynamicVariables=1
Substitute="":"#Author1#"

[MeasureQuote1]
Measure=Plugin 
Plugin=WebParser
URL=[MeasureSite]
StringIndex=6
Substitute="":"#Quote1#"

[MeasureDate1]
Measure=Plugin 
Plugin=WebParser
URL=[MeasureSite]
StringIndex=4
Substitute="00:00:00":"","GMT":""

[MeasureAuthor2]
Measure=Plugin 
Plugin=WebParser
URL=[MeasureSite]
DecodeCharacterReference=1
StringIndex=7
Substitute="":"#Author2#"

[MeasureQuote2] 
Measure=Plugin 
Plugin=WebParser
URL=[MeasureSite]
DecodeCharacterReference=1
StringIndex=8
Substitute="":"#Quote2#"

[MeasureDate2]
Measure=Plugin 
Plugin=WebParser
URL=[MeasureSite]
StringIndex=4
Substitute="00:00:00":"","GMT":""

[MeasureAuthor3] 
Measure=Plugin 
Plugin=WebParser
URL=[MeasureSite]
DecodeCharacterReference=1
StringIndex=9
Substitute="":"#Author3#"

[MeasureQuote3] 
Measure=Plugin 
Plugin=WebParser
URL=[MeasureSite]
DecodeCharacterReference=1
StringIndex=10
Substitute="":"#Quote3#"

[MeasureDate3]
Measure=Plugin 
Plugin=WebParser
URL=[MeasureSite]
StringIndex=4
Substitute="00:00:00":"","GMT":""

[MeasureWord]
Measure=Plugin 
Plugin=WebParser
URL=[MeasureWOTD]
StringIndex=1
Substitute="":"#Word1#"

[MeasureDefinition]
Measure=Plugin 
Plugin=WebParser
URL=[MeasureWOTD]
StringIndex=2
Substitute="":"#Definition1#"

[MeasureHistoryDate]
Measure=Plugin 
Plugin=WebParser
URL=[MeasureHistory]
StringIndex=1
Substitute="":"#HistoryDate1#"

[MeasureHistoryDesc]
Measure=Plugin 
Plugin=WebParser
URL=[MeasureHistory]
StringIndex=2
Substitute="":"#HistoryDesc1#"