# How to Build for PlayStation 3

# Pre-requisites

* Need [ps3toolchain](https://github.com/ps3dev/PS3Toolchain) and [SDL2](https://github.com/DropSonic0/Sonic-Mania-Decompilation/tree/master/SDL2PSL1GHT) configured.
* Need a "legitimate" copy of Sonic Mania.

# Steps
* clone this repository ```git clone https://github.com/DropSonic0/Sonic-Mania-Decompilation.git``` --recursive.
* Copy your "Data.rsdk" to ```pkgfiles/USRDIR```.
* Run 1 "su" on terminal
* Run 2 ```export PKG_CONFIG_PATH=$PS3DEV/portlibs/ppu/lib/pkgconfig/```.
* look for the "MAKEFILE" in "/SonicMania.ps3" and run ```make pkg```.
* After finishing the build will be generated two pkg, install ```SonicMania.pkg```.
---------------------------------------------------------------------------------------------------------------------------------------------------------
# Cómo compilar para PlayStation 3

# Requisitos previos

* Se necesita [ps3toolchain](https://github.com/ps3dev/PS3Toolchain) y [SDL2](https://github.com/DropSonic0/Sonic-Mania-Decompilation/tree/master/SDL2PSL1GHT) configurados.
* Se necesita una copia "legítima" de Sonic Mania.

# Pasos
* Clona este repositorio : ```git clone https://github.com/DropSonic0/Sonic-Mania-Decompilation.git``` --recursive.
* Copiar tu archivo "Data.rsdk" a ```pkgfiles/USRDIR```.
* Ejecuta 1 "su" en la terminal.
* Ejecuta 2 ```export PKG_CONFIG_PATH=$PS3DEV/portlibs/ppu/lib/pkgconfig/```.
* Busca el archivo "MAKEFILE" en "/SonicMania.ps3" y ejecuta ```make pkg```.
* Después de terminar la compilación, se generarán dos paquetes; instala ```SonicMania.pkg```.