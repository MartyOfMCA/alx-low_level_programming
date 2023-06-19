# 0x18. C - Dynamic libraries
This directory contains source code files on dynamic libraries in C. This project was created as part of my course requirement at ALX.

## Concepts
* Dynamic libraries
  * Creating and using dl in C
* Debugging tools
  * `nm` and `ldd` commands

## How to create a dynamic library
Libraries are created from C source code files. 

1. First they have to be compiled. 
`gcc -fPIC _strlen.c _puts.c -c`

Producing `_strlen.o` and `_puts.o` files respectively. Take note that `_strlen.c` and `_puts.c` are source code files used in this example having some functionalities.

2. Now we get to create our dynamic or shared library from the compiled files
`gcc -shared *.o -o libstrings.so`

Producing `libstrings.so`. The name chosen for the library is `strings`. `lib` is the prefix and `.so` the file extension to indicate that the file is a shared or dynalic library.

3. Set the `$LD_LIBRARY_PATH` environment variable to store the path to your dynamic library
`export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH` or `export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH`

Since `.`. denotes the current directory (precisely what `$PWD` would return) it can be used interchangeably with `$PWD`

4. Now our `main.c` or whichever source code file with your main function can be executed as such
`gcc -L. main.c -lstrings -o main`

## Additional notes
It is well noting that alll source code files in this directory are betty compliant. You can run `betty source_code_file` to check the contents in a source code file. You can easily get your development environment up and running with betty from [here](https://github.com/alx-tools/Betty/tree/master)
