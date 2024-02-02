#include "Circle.h"
#include <iostream>

Circle::Circle(double r) : 
    mRadius(r) 
{}

void Circle::draw() const 
{
    std::cout << "Drawing Circle with radius " << mRadius << std::endl;
}
