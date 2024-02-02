#pragma once
#include "Shape.h"

class Square : public Shape 
{
public:
    Square(double s);
    void draw() const override;

private:
    double mSide;
};