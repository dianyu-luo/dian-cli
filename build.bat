@REM cmake 构建项目
@echo off

if not exist vcpkg (
    git clone https://github.com/microsoft/vcpkg.git
)
cd vcpkg 
if not exist vcpkg.exe (
    call bootstrap-vcpkg.bat -disableMetrics || echo bootstrap-vcpkg.bat run with error, go on ...
)
.\vcpkg.exe install 
.\vcpkg.exe export --raw --output-dir .. --output=vcpkg-export
rmdir /s /q ..\vcpkg_installed
cd .. 
@REM cmake  -S. -Bbuild  
@REM cmake --build build --target ALL_BUILD