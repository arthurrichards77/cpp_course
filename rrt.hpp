#include "point.hpp"
#include <vector>

class Rrt {
    Point goal;
    std::vector<Point> points;
    std::vector<int> parents;
  public:
    int i_closest(Point);
    Point extend(int, Point);
    void add_to_tree(Point, int);
    virtual Point step(); // will be overloaded when obstacles added    
    void set_start(Point);
    bool run(Point,Point);
    void print();
};
