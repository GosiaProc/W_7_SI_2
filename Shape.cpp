#include "Shape.h"

double Shape::getPerimeter()
{
    return perimeter;
}

double Shape::getArea()
{
    return area;
}

void Shape::printPerimeterFormula()
{
    std::cout << perimeterFormula;
}

void Shape::printAreaFormula()
{
    std::cout << areaFormula;
}
