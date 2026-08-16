# Infinity Execute Plus
Welcome to the official Infinity Execute Plus (IE+) repository! IE+ is an open source hybrid programming language Virtual Machine Collection. IE+ is designed for both typing and execution speed. This project contains the official source along with the precompiled official virtual machine. Enjoy coding!

# NOTE
This project contains windows-only instructions and you will need to modify some source code for different platforms.

# You Will Need

1. IE+ source code
2. A c++ compiler (G++ recommended)

# Build
(placeholder) - You can put your build command here or write it on a command script.

Default Command (G++)

g++ -shared -DBUILDING_IOPROCESSOR -o ioprocessor.dll Libraries/ioprocessor.cpp -I. "-Wl,--out-implib,libioprocessor.a" -std=c++17;
g++ -o 'Infinity Execute Plus.exe' 'Infinity Execute Plus.cpp' -I. -L. -lioprocessor -std=c++17
