# SetVersion by Mike Boynton
cls
# Set path of "VariablesDefault.inc" file
$mypath = $MyInvocation.MyCommand.Path
$mypath = Split-Path $mypath -Parent
$mypath = Split-Path $mypath -Parent
$mypath = $mypath+"\Variables\"

# File to change
$file = $mypath + "VariablesDefault.inc"

# Set new version
$version = Get-Date -Format "yy.MMdd"

# Look for current Version. This works for any string that contains the string "version"
$find = (Get-Content "$file")  -match '(version)'

# "Version" not found, look for correct placement
$findline = Select-String -Path "$file" -Pattern "MyVariablesLoc" | Select-Object LineNumber
$SearchStart="="
$SearchEnd="}"
$findline -match "(?s)$SearchStart(?<content>.*)$SearchEnd"
[int]$findline=$matches['content']

# Add variable name "MyVersion" on the line below "MyVariablesLoc"
if (!$find) {
$find = "MyVersion="
(Get-Content "$file") 
$fileContents = Get-Content "$file"
$lineNumber = $findline
$textToAdd = $find 
$linefeed = "`n"
$fileContents[$lineNumber] += $textToAdd += $linefeed
$fileContents | Set-Content "$file"
}

# Find name of variable containing the string "version"
if ($find -like '*version*') { 

$string = $find
$string = $string -split "="
$string = $string[0]
}

# Set replacement string
$replace = $string + '='+ $version

# Replace old version with new version and save
(Get-Content "$file") -Replace $find, $replace | Set-Content "$file"

# Clear the variables
Clear-Variable file
Clear-Variable version
Clear-Variable find
Clear-Variable prefix
Clear-Variable replace