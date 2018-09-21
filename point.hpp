class Point {
  public:
    double x;
    double y;
    Point();
    Point(double,double);
    void print();
    void println();
};

Point diff(Point,Point);

Point sum(Point,Point);

Point scale(Point,double);

double norm(Point);

class RandomPoint: public Point {
  public:
    RandomPoint();
};
