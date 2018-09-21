#include "rrt.hpp"

int main() {

  Rrt r;

  Point start(0,0.9);
  Point goal (0.4,0.8);

  r.run(start,goal);
  r.print();

  return(0);

}
