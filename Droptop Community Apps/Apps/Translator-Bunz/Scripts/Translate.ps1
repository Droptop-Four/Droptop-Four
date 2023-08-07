function Translate {
    $SourceLanguage = $RmAPI.OptionStr('SourceLanguage')
    # write-host $SourceLanguage

    $TargetLanguage = $RmAPI.OptionStr('TargetLanguage')
    # write-host $TargetLanguage

    $Text = $RmAPI.OptionStr('Text')
    # write-host $Text

    $VarsLocation = $RmAPI.OptionStr('VarsLocation')
    # write-host $VarsLocation

    $Uri = “https://translate.googleapis.com/translate_a/single?client=gtx&sl=$($SourceLanguage)&tl=$($TargetLanguage)&dt=t&q=$Text”

    $Response = Invoke-RestMethod -Uri $Uri -Method Get

    $Translation = $Response[0].SyncRoot | ForEach-Object { $_[0] }

    # write-host $Translation

    $RmAPI.Bang('!SetVariable Translation1 "'+$Translation+'"')
    $RmAPI.Bang('!WriteKeyValue Variables Translation1 "'+$Translation+'" "'+$VarsLocation+'"')
    
    $RmAPI.Bang('!SetVariable CopyActive 1')
}