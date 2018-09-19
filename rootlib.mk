all: rootlibtest.cpp rootlib.o
	g++ -o rootlibtest rootlibtest.cpp rootlib.o

rootlib.o: rootlib.cpp rootlib.hpp
	g++ -c rootlib.cpp
