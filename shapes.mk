all: squarelibtest rectanglelibtest

squarelibtest: squarelibtest.cpp squarelib.o rectanglelib.o
	g++ -o squarelibtest squarelibtest.cpp squarelib.o rectanglelib.o

squarelib.o: squarelib.cpp squarelib.hpp rectanglelib.o
	g++ -c squarelib.cpp

rectanglelibtest: rectanglelibtest.cpp rectanglelib.o
	g++ -o rectanglelibtest rectanglelibtest.cpp rectanglelib.o

rectanglelib.o: rectanglelib.cpp rectanglelib.hpp
	g++ -c rectanglelib.cpp
