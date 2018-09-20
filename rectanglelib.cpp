#include "rectanglelib.hpp"

Rectangle::Rectangle() {
  w = 0;
  h = 0;
}

void Rectangle::set_width_height(double w_in, double h_in) {
  w = w_in;
  h = h_in;
}

void Rectangle::scale(double scale_factor) {
  w = scale_factor*w;
  h = scale_factor*h;
}

double Rectangle::get_area() {
  return(h*w);
}
