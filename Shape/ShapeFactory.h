#pragma once
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

class ShapeFactory 
{
public:
    static Shape* createCircle(double radius);
    static Shape* createSquare(double side);
};