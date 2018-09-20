all: byvalue hello mixing poly rectangle rectlist root rootfun rectanglelibtest rootlibtest square squarelibtest

hello: hello.cpp
	g++ -o hello hello.cpp

mixing: mixing.cpp
	g++ -o mixing mixing.cpp

root: root.cpp
	g++ -o root root.cpp

rootfun: rootfun.cpp
	g++ -o rootfun rootfun.cpp

byvalue: byvalue.cpp
	g++ -o byvalue byvalue.cpp

rectangle: rectangle.cpp
	g++ -o rectangle rectangle.cpp

square: square.cpp
	g++ -o square square.cpp

rectlist: rectlist.cpp rectanglelib.o
	g++ -o rectlist rectlist.cpp rectanglelib.o

poly: poly.cpp squarelib.o rectanglelib.o
	g++ -o poly poly.cpp squarelib.o rectanglelib.o

squarelibtest: squarelibtest.cpp squarelib.o rectanglelib.o
	g++ -o squarelibtest squarelibtest.cpp squarelib.o rectanglelib.o

squarelib.o: squarelib.cpp squarelib.hpp rectanglelib.o
	g++ -c squarelib.cpp

rectanglelibtest: rectanglelibtest.cpp rectanglelib.o
	g++ -o rectanglelibtest rectanglelibtest.cpp rectanglelib.o

rectanglelib.o: rectanglelib.cpp rectanglelib.hpp
	g++ -c rectanglelib.cpp

rootlibtest: rootlibtest.cpp rootlib.o
	g++ -o rootlibtest rootlibtest.cpp rootlib.o

rootlib.o: rootlib.cpp rootlib.hpp
	g++ -c rootlib.cpp
