#include "test.h"
Square::Square()
{
    length = 1;
}

Square::Square(int length)
{
    this->length = length;
}

int Square::getArea()
{
    return length * length;
}