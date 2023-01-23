#ifndef TRAPIZOID_H 
#define TRAPIZOID_H
#include "quadrilateral.h"

class Trapezoid : public Shape, public Quadrilateral{
    private:
    double areaOfTrap, side;
    public: 
    Trapezoid(double l, double h, double s);
    double area();
    void display() const;
};
#endif