#include "rectanglelib.hpp"
#include <vector>
#include <iostream>

int main() {

  std::vector<Rectangle> all_rects;
  std::vector<Rectangle>::iterator it;

  Rectangle r1;
  r1.set_width_height(2.0,3.0);
  all_rects.push_back(r1);

  r1.set_width_height(5.0,3.0);
  all_rects.push_back(r1);

  std::cout << all_rects[0].get_area() << std::endl;
  std::cout << all_rects[1].get_area() << std::endl;

  for (it = all_rects.begin(); it != all_rects.end(); ++it) {
    //(*it).scale(2.0);
    it->scale(2.0);
    //std::cout << (*it).get_area() << std::endl;
    std::cout << it->get_area() << std::endl;
  }

  return(0);

}
