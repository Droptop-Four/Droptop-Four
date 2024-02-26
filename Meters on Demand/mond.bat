@ECHO OFF

SET PSScript=%~dp0MetersOnDemand.ps1

Powershell -ExecutionPolicy Bypass -File "%PSScript%" %*
@REM Powershell -ExecutionPolicy Bypass -Command "& '%PSScript%' %*"