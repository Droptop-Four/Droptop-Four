
function Translate {
    $SourceLanguage = $RmAPI.OptionStr('SourceLanguage')
    $TargetLanguage = $RmAPI.OptionStr('TargetLanguage')
    $Text = $RmAPI.OptionStr('Text')
    $VarsLocation = $RmAPI.OptionStr('VarsLocation')

    $Uri = “https://translate.googleapis.com/translate_a/single?client=gtx&sl=$($SourceLanguage)&tl=$($TargetLanguage)&dt=t&q=$($Text)”

    $Response = Invoke-RestMethod -Uri $Uri -Method Get
    $Translation = $Response[0].SyncRoot | ForEach-Object { $_[0] }

    $RmAPI.Bang('!SetVariable Translation1 "'+$Translation+'"')
    $RmAPI.Bang('!WriteKeyValue Variables Translation1 "'+$Translation+'" "'+$VarsLocation+'"')
    $RmAPI.Bang('!SetVariable CopyActive 1')
    $RmAPI.Bang('!UpdateMeter *')
    $RmAPI.Bang('!Update')
}
