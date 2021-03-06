# Yaefe
Yet another emulator front end

Nothing to really see here yet - just experimenting

## Windows building

I use [vcpkg](https://github.com/microsoft/vcpkg) for package management

```
> git clone https://github.com/Microsoft/vcpkg.git
> cd vcpkg

PS> .\bootstrap-vcpkg.bat
Linux:~/$ ./bootstrap-vcpkg.sh

.\vcpkg integrate install
```


### Packages

After running the `bootstrap-vcpkg` script, you need to install the following packages.
(note you'll need the x64-windows suffix as below when building 64 bit).

```
vcpkg install sdl2:x64-windows
```

### Running cmake

You need to specify the vcpkg toolchain when running cmake.
vcpkg_root below is where you cloned vcpkg.

```
cmake -DCMAKE_TOOLCHAIN_FILE={vcpkg_root}\scripts\buildsystems\vcpkg.cmake
```

For convenience, you can run the `build_scripts\generate_vs2019_64.cmd` or make a copy
and modifiy according to your needs.

## MacOS building

I use brew to install packages. https://brew.sh/

Then after installing cmake and sdl2, you can configure with:

```
cmake -G Xcode
```
