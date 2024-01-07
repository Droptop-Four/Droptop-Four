
function Translate {
    $SourceLanguage = $RmAPI.OptionStr('SourceLanguage')
    $TargetLanguage = $RmAPI.OptionStr('TargetLanguage')
    $Text = $RmAPI.OptionStr('Text')
    $VarsLocation = $RmAPI.OptionStr('VarsLocation')

    $Uri = “https://translate.googleapis.com/translate_a/single?client=gtx&sl=$($SourceLanguage)&tl=$($TargetLanguage)&dt=t&q=$($Text)”

    $Response = Invoke-RestMethod -Uri $Uri -Method Get
    $Translation = $Response[0].SyncRoot | ForEach-Object { $_[0] }

    $RmAPI.Bang('!SetVariable Translation1 "' + $Translation + '"')
    $RmAPI.Bang('!WriteKeyValue Variables Translation1 "' + $Translation + '" "' + $VarsLocation + '"')
    $RmAPI.Bang('!SetVariable CopyActive 1')
    $RmAPI.Bang('!UpdateMeter *')
    $RmAPI.Bang('!Update')
}

function Listen {
    $Translation = $RmAPI.OptionStr('Translation')
    $TargetLanguage = $RmAPI.OptionStr('TargetLanguage')

    $targetCulture = @{
        'en' = 'en-US'
        'fr' = 'fr-FR'
        'de' = 'de-DE'
        'es' = 'es-ES'
        'it' = 'it-IT'
        'pt' = 'pt-PT'
        'ru' = 'ru-RU'
        'ja' = 'ja-JP'
        'zh' = 'zh-CN'
    }
    $targetCultureCode = $targetCulture[$TargetLanguage]

    if (!$targetCultureCode) {
        $targetCultureCode = 'en-US'
        Write-Host "Invalid target language."
    }

    Add-Type -AssemblyName System.Speech
    $SpeechSynthesizer = New-Object -TypeName System.Speech.Synthesis.SpeechSynthesizer

    $targetVoice = $SpeechSynthesizer.GetInstalledVoices() | Where-Object { $_.VoiceInfo.Culture.Name -eq $targetCultureCode }

    if (!$targetVoice) {
        Write-Host "Target voice not found. Falling back to English."
        $targetCultureCode = 'en-US'
        $targetVoice = $SpeechSynthesizer.GetInstalledVoices() | Where-Object { $_.VoiceInfo.Culture.Name -eq $targetCultureCode }
    }

    $SpeechSynthesizer.SelectVoice($targetVoice.VoiceInfo.Name)
    $SpeechSynthesizer.Speak($Translation)
}
