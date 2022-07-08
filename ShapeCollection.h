#pragma once
#include <iostream>
#include "Square.h"
#include "Circle.h"
#include <vector>

class ShapeCollection
{
	std::vector<Circle>circles;
	std::vector<Square>squaers;
public:
	void addShape(std::string typeShape);
	void getShapesTable();
	void getLargestShapeByPerimeter();
	void getLargestShapeByArea();
	void getFormulas();

};

