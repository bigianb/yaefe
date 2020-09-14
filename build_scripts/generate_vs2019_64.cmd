@echo off
mkdir build_vs2019
pushd build_vs2019
"C:\Program Files\CMake\bin\cmake" ../.. -G "Visual Studio 16 2019" -A x64 -DCMAKE_TOOLCHAIN_FILE=..\..\..\vcpkg\scripts\buildsystems\vcpkg.cmake"
popd
