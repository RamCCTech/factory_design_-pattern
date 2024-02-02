#include "Square.h"
#include <iostream>

Square::Square(double s) : 
    mSide(s) 
{}

void Square::draw() const 
{
    std::cout << "Drawing Square with side " << mSide << std::endl;
}