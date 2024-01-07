function Update
{
}
# All code found on stackoverflow.com
sleep -s 2

# These three lines of code hides the powershell window so it does not get into the capture
# Code by Andy Lowry, Jan 16, 2015
# https://stackoverflow.com/questions/1802127/how-to-run-a-powershell-script-without-displaying-a-window

$t = '[DllImport("user32.dll")] public static extern bool ShowWindow(int handle, int state);'
add-type -name win -member $t -namespace native
[native.win]::ShowWindow(([System.Diagnostics.Process]::GetCurrentProcess() | Get-Process).MainWindowHandle, 0)

# Start capture
# Code by Jacob Colvin, May 31, 2019
# https://stackoverflow.com/questions/2969321/how-can-i-do-a-screen-capture-in-windows-powershell

Add-Type -AssemblyName System.Windows.Forms,System.Drawing

$screens = [Windows.Forms.Screen]::AllScreens

# This sets the size of the rectangle, changed the width and height lines to make a 400 wide x 100 high box
$top    = ($screens.Bounds.Top    | Measure-Object -Minimum).Minimum
$left   = ($screens.Bounds.Left   | Measure-Object -Minimum).Minimum
# $width  = ($screens.Bounds.Right  | Measure-Object -Maximum).Maximum
$width  = ($screens.Bounds.Left  | Measure-Object -Minimum).Minimum + 800
# $height = ($screens.Bounds.Bottom | Measure-Object -Maximum).Maximum
$height = ($screens.Bounds.Top    | Measure-Object -Minimum).Minimum + 84

$bounds   = [Drawing.Rectangle]::FromLTRB($left, $top, $width, $height)
$bmp      = New-Object System.Drawing.Bitmap ([int]$bounds.width), ([int]$bounds.height)
$graphics = [Drawing.Graphics]::FromImage($bmp)

$graphics.CopyFromScreen($bounds.Location, [Drawing.Point]::Empty, $bounds.size)

# This is the save to location and file name
$bmp.Save("$env:USERPROFILE\Documents\Rainmeter\Skins\Droptop Community Apps\Apps\Theme_Me-Mike_Boynton\Images\99.png")

$graphics.Dispose()
$bmp.Dispose()
