#include <iostream>
#include <cstdlib>
#include <cmath>
#include "point.hpp"

Point::Point() {
  x = 0.0;
  y = 0.0;
}

Point::Point(double x_in, double y_in) {
  x = x_in;
  y = y_in;
}

void Point::print() {
  std::cout << "(" << x << "," << y << ")";
}

void Point::println() {
  print();
  std::cout << std::endl;
}

Point diff(Point p1, Point p2) {
  Point pdiff(p1.x-p2.x, p1.y-p2.y);
  return(pdiff);
}

Point sum(Point p1, Point p2) {
  Point p_sum(p1.x+p2.x, p1.y+p2.y);
  return(p_sum);
}

Point scale(Point p, double f) {
  Point p_scl(f*p.x, f*p.y);
  return(p_scl);
}

double norm(Point p) {
  return(sqrt(p.x*p.x + p.y*p.y));
}

RandomPoint::RandomPoint() {
  x = rand()*1.0/RAND_MAX;
  y = rand()*1.0/RAND_MAX;
}
