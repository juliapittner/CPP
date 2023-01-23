#include <iostream>  
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "trapezoid.h"

using namespace std; 

    /*Circle functions*/
    Circle::Circle(double r)
    {
        setRadius(r);
        area();
    }
    void Circle::setRadius(double r){
        radius = r;
    }
    double Circle::area() {
        areaOfCircle = 3.14159 * (radius * radius);
    }
    void Circle::display() const {
        cout << "Circle: " << radius << " | " << "Area = " << areaOfCircle << endl;
    }

    /*Rectangle functions*/
    Rectangle::Rectangle(int l, int w)
    {
        length = l;
        width = w;
        area();
    }
    double Rectangle::area()
    {
        areaOfRec = length * width;
    }
    void Rectangle::display() const
    {
        cout << "Rectangle: " << length << ", " << width << " | " << "Area = " << areaOfRec << endl;
    }
    
    /*Trapezoid functions*/
    Trapezoid::Trapezoid(double l, double h, double s){
        length = l;
        height = h;
        side = s;
        area();
    }
    double Trapezoid::area(){
        areaOfTrap = ((length + side)/2) * height;
    }
    void Trapezoid::display() const {
        cout << "Trapezoid: " << length << ", " << height << ", " << side << " | " << "Area = " << areaOfTrap << endl;
    }



