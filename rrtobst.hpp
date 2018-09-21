#include "rrt.hpp"
#include <vector>

class Obst {
    Point ctr;
    double rad;
  public:
    Obst(double, double, double);
    bool contains_pt(Point);
    void move(double,double);
};

class RrtObst : public Rrt {
    std::vector<Obst> obstacles;
    bool in_obstacle(Point);
    Point step();
  public:
    void add_obstacle(Obst);
};


