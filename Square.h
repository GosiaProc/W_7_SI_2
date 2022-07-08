#pragma once
#include "Shape.h"
class Square :
    public Shape
{
private:
    int a;
    double calculateArea();
    double calculatePerimeter();
public:
    Square(std::string name);
    void printResult();


};