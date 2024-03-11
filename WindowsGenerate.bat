@echo off
SET version=%~1%
if "%~1"=="" SET version="vs2022"

pushd Sources\Hammer
call ..\..\Dependencies\premake5\premake5.exe %version%
popd

PAUSE