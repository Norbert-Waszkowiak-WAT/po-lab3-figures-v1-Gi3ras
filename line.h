#ifndef LINE
#define LINE
#include "point.h"
class Line{
    private:
    Point a;
    Point b;
    public:
    Line(Point a, Point b);
    Line(const Point&other);
    bool equals(Point &other);
    void flip();
    void move(double a,double y);
    std::string
}