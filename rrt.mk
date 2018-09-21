all: testpoint rrttest rrtobsttest

rrtobsttest: rrtobsttest.cpp rrtobst.o rrt.o point.o
	g++ -o rrtobsttest rrtobsttest.cpp rrtobst.o rrt.o point.o

rrtobst.o: rrtobst.cpp rrtobst.hpp rrt.o
	g++ -c rrtobst.cpp

rrttest: rrttest.cpp rrt.o point.o
	g++ -o rrttest rrttest.cpp rrt.o point.o

rrt.o: rrt.cpp rrt.hpp
	g++ -c rrt.cpp

testpoint: testpoint.cpp point.o
	g++ -o testpoint testpoint.cpp point.o

point.o: point.cpp point.hpp
	g++ -c point.cpp


