# About
This program is get colored input from keyboard using [readline](https://tiswww.case.edu/php/chet/readline/rltop.html)
# Requirements
- cmake
- conan
# Run
```sh
$ mkdir build
$ cd build
$ conan install .. --build=missing
$ cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
$ cmake --build
$ ./colored-input
```
