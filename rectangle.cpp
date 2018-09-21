#include <iostream>

class Rectangle {
    double w,h;
  public:
    Rectangle();
    void set_width_height(double, double);
    void scale(double);
    double get_area();
};

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

int main() {
  Rectangle r;
  // can't access h and w directly from outside
  // r.w = 3.0 will fail
  r.set_width_height(3.0,4.0);
  //r.w = 7.0;
  std::cout << r.get_area() << std::endl;
  r.scale(2.0);
  std::cout << r.get_area() << std::endl;
}
