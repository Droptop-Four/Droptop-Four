cd %2%Droptop\@Resources\Scripts\ImageMagick"
convert %1% -fill white +opaque none "CustomButton.png"
mogrify -resize 32x32! "CustomButton.png"
mogrify -background none -gravity Center -extent 78x52 "CustomButton.png"
convert %2%Droptop\@Resources\Scripts\ImageMagick\CustomButton.png" ^( +clone -background black -shadow 80x2+0+0 ^) +swap -background none -layers merge +repage "CustomButtonS.png"
xcopy /E /I /Y "*.png" %2Droptop Folders\Other files\Home\"
del /f /q "*.png"
PAUSE