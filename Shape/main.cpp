#include "ShapeFactory.h"

int main() 
{
    // Using the factory to create shapes
    Shape* circle = ShapeFactory::createCircle(5.0);
    Shape* square = ShapeFactory::createSquare(4.0);

    // Drawing the shapes
    circle->draw();
    square->draw();

    // Cleanup
    delete circle;
    delete square;

    return 0;
}