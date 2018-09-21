#include "rrtobst.hpp"
#include <iostream>

Obst::Obst(double x,double y,double rad_in) {
  ctr = Point(x,y);
  rad = rad_in;
}

void Obst::move(double dx, double dy) {
  ctr = sum(ctr,Point(dx,dy));
}

bool Obst::contains_pt(Point p) {
  return(norm(diff(p,ctr))<rad);
}

void RrtObst::add_obstacle(Obst ob) {
  obstacles.push_back(ob);
}

bool RrtObst::in_obstacle(Point p) {
  bool in_ob = false;
  int ii=0;
  while ((in_ob==false) && (ii<obstacles.size())) {
    if (obstacles[ii].contains_pt(p)) {
      in_ob = true;
    }
    ii++;
  }
  return(in_ob);
}

Point RrtObst::step() {
  Point p_rand = RandomPoint();
  int i_cl = i_closest(p_rand);
  Point p_ext = extend(i_cl,p_rand);
  if (in_obstacle(p_ext)==false) {
    add_to_tree(p_ext,i_cl);
  }
  return(p_ext);
}

