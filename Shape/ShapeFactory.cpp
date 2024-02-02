#include "ShapeFactory.h"

Shape* ShapeFactory::createCircle(double radius) 
{
    return new Circle(radius);
}

Shape* ShapeFactory::createSquare(double side) 
{
    return new Square(side);
}                                                        