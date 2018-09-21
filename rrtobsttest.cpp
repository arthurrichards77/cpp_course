#include "rrtobst.hpp"

int main() {

  RrtObst r;

  Point start(0,0.9);
  Point goal (0.4,0.1);

  Obst ob(0.3,0.3,0.2);
  r.add_obstacle(ob);
  ob.move(0.4,0.1);
  r.add_obstacle(ob);

  r.run(start,goal);
  r.print();

  return(0);

}
