#pragma once
#include "Shape.h"

class Circle : public Shape 
{
public:
    Circle(double r);
    void draw() const override;

private:
    double mRadius;
};