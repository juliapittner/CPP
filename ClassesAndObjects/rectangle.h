#ifndef RECTANGLE_H 
#define RECTANGLE_H 
#include "shape.h"

class Rectangle : public Shape {
    private:
    int areaOfRec, length, width;

    public:
    Rectangle(int l, int w);
    double area();
    void display() const;
};
#endif