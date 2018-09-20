#!/bin/bash

g++ -o hello hello.cpp
g++ -o mixing mixing.cpp
g++ -o root root.cpp
g++ -o rootfun rootfun.cpp
g++ -o byvalue byvalue.cpp
g++ -o rectangle rectangle.cpp
g++ -o square square.cpp
make -f rootlib.mk
make -f shapes.mk
g++ -o rectlist rectlist.cpp rectanglelib.o
g++ -o poly poly.cpp squarelib.o rectanglelib.o
