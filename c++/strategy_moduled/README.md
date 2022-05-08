# Example of strategy pattern using new C++ modules.

This examples works with g++ 11.3.1 on Fedora 35.

Import of header files is not possible. You have to use old school #include.

I prefered not to use seperation into an Module Interface Unit and Module Implementation Unit.

Module is splittet in submodules for logical seperation purposes.

Partitioning of module didn't work in g++ on my system for whatever reasons.


# Steps to get things work:

1. Compile module source files:
g++ -c -fmodules-ts FlightBehaviour.cpp // independend
g++ -c -fmodules-ts QuackBehaviour.cpp // independend
g++ -c -fmodules-ts Duck.cpp // depends on both first compiled files
g++ -c -fmodules-ts strategy.cpp // depends on all module source files

2. Compile main source file:
g++ -c -fmodules-ts main.cpp

3. Link resulting object files
g++ -o main *.o

4. Run programm
./main


