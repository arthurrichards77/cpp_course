#include <iostream>
#include "rrt.hpp"

void Rrt::set_start(Point start) {
  points.push_back(start);
  parents.push_back(0);  
}

Point Rrt::step() {
  Point p_rand = RandomPoint();
  int i_cl = i_closest(p_rand);
  Point p_ext = extend(i_cl,p_rand);
  add_to_tree(p_ext,i_cl);
}

bool Rrt::run(Point start, Point goal) {

  set_start(start);

  Point newpt;
  int kk=0;
  bool arrived=false;
  do {
    kk++;
    newpt = step();
    if (norm(diff(newpt,goal))<0.05) arrived=true;
  } while ((kk<1000)&&(arrived==false));
  return(arrived);
}

void Rrt::print() {
  int ii;
  for (ii=0; ii<points.size(); ii++) {
    points[ii].print();
    points[parents[ii]].print();
    std::cout << std::endl;
  }
}

int Rrt::i_closest(Point p) {
  // find index of closest node to p in tree
  int ii,i_best = 0;
  double dd,d_best = 1e12;
  for (ii=0; ii<points.size(); ii++) {
    dd = norm(diff(p,points[ii]));
    if (dd<d_best) {
      i_best = ii;
      d_best = dd;
    }
  }
  return(i_best);
}

Point Rrt::extend(int i, Point p) {
  // extend from node i in direction of point p
  Point p_diff = diff(p,points[i]);
  double f = 0.02/norm(p_diff);
  Point p_scl = scale(p_diff,f);
  Point p_ext = sum(points[i],p_scl);
  return(p_ext);
}

void Rrt::add_to_tree(Point p, int i_parent) {
  points.push_back(p);
  parents.push_back(i_parent);
}
