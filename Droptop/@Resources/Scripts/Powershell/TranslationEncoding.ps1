# Specify the zip folder path
# $zipFolderPath = $args[0]
# $parentFolderPath = $args[0]

# # Parent folder path
# $parentFolderPath = (Get-Item $zipFolderPath).Directory.FullName

# # Extract the "Translations" folder from the zip to the parent folder
# Expand-Archive -Path $zipFolderPath -DestinationPath $parentFolderPath -Force

# Get the path of the Translations folder
$translationsFolderPath = Join-Path -Path $parentFolderPath -ChildPath "Languages"

# Get the list of "inc" files in the Translations folder
$incFiles = Get-ChildItem -Path $translationsFolderPath -Filter "*.inc" -File

# Iterate through each "inc" file
foreach ($incFile in $incFiles) {
    # Read the content of the "inc" file as UTF-8
    $content = Get-Content -Path $incFile.FullName -Encoding UTF8

    # Convert the content to UTF-16LE format with BOM and preserve line breaks
    $convertedContent = [System.Text.Encoding]::Unicode.GetBytes(($content -join "`r`n"))
    $bom = [System.Text.Encoding]::Unicode.GetPreamble()
    $outputContent = $bom + $convertedContent

    # Write the converted content back to the original file in UTF-16LE format
    [System.IO.File]::WriteAllBytes($incFile.FullName, $outputContent)
}

# Write-Host "File transformation completed."
