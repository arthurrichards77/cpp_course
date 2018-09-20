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



class Square : public Rectangle {
  public:
    void set_side_len(double);
};

void Square::set_side_len(double s_in) {
  // can't access h,w directly as they're private
  set_width_height(s_in,s_in);
}

int main() {
  Rectangle r;
  r.set_width_height(3.0,4.0);
  std::cout << r.get_area() << std::endl;
  Square s;
  s.set_side_len(2.0);
  std::cout << s.get_area() << std::endl;
  s.scale(3.0);
  std::cout << s.get_area() << std::endl;

}
