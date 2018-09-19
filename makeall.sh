#!/bin/bash

g++ -o hello hello.cpp
g++ -o mixing mixing.cpp
g++ -o root root.cpp
g++ -o rootfun rootfun.cpp
g++ -o byvalue byvalue.cpp

g++ -c rootlib.cpp
g++ -o rootlibtest rootlibtest.cpp rootlib.o
