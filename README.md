# Eudemonia
[![CodeFactor](https://www.codefactor.io/repository/github/ando233/eudemonia/badge)](https://www.codefactor.io/repository/github/ando233/eudemonia)
![](https://img.shields.io/badge/license-WTFPL-green)

Eudemonia, compiler for SysY-Mips.

## Quick Start

```sh
git clone git@github.com:Ando233/Eudemonia.git
cd helesta && mkdir build && cd build
# Configure
cmake ..
# Build
make -j6 && cd ../src
```

## Usage

```sh
./compiler.exe -S testcase.sy -o testcase.s [-O1]
```
