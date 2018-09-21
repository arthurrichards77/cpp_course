#include <iostream>
#include "point.hpp"

int main() {
  Point p1;
  p1.println();
  p1.x = 4.0;
  p1.println();
  Point p2(2.0,4.5);
  p2.println();
  RandomPoint p3;
  p3.println();
  Point p4 = diff(p3,p1);
  p4.println();
  std::cout << norm(p2) << std::endl;
}
