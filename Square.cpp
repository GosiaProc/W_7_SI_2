#include "Square.h"

double Square::calculateArea()
{
    return a*a;
}

double Square::calculatePerimeter()
{
    return 4*a;
}

Square::Square(std::string name)
{
    this->name = name;
    std::cout << "Podaj dlugosc boku a:";
    std::cin >> a;
    area = calculateArea();
    perimeter = calculatePerimeter();
    perimeterFormula = "4a";
    areaFormula = "a^2";
}

void Square::printResult()
{
    std::cout << name << std::endl;
    std::cout << "Dlugosc boku:" << a << std::endl;
    std::cout << "Obowod:" << perimeter << std::endl;
    std::cout << "Pole:" << area << std::endl;
}
