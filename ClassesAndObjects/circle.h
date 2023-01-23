#ifndef CIRCLE_H 
#define CIRCLE_H 
#include "shape.h"

class Circle : public Shape {
    private:
    double radius, areaOfCircle;
    public:
    Circle(double r);
    void setRadius(double r);
    double area();
    void display() const;
};

#endif