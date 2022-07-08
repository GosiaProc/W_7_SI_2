#include "ShapeCollection.h"

void ShapeCollection::addShape(std::string typeShape)
{
	if (typeShape == "Square")
		squaers.push_back(Square("Kwadrat"));
	else if (typeShape == "Circle")
		circles.push_back(Circle("Kolo"));
	else
		std::cout << "ERROR";
}

void ShapeCollection::getShapesTable()
{
	std::cout << "TOWJE Kolkaa:\n";
	for (auto c : circles)
	{
		c.printResult();

	}
	std::cout << "\nTOWJE KWADRATY:\n";
	for (auto s : squaers)
	{
		s.printResult();
	}
}

void ShapeCollection::getLargestShapeByPerimeter()
{
	double maxKolko = 0;
	int maxKolkoPozycja = 0;
	double maxKwadrat = 0;
	int maxKwadratPozycja = 0;

	int temp1 = 0;
	for (auto c : circles)
	{
		if (c.getPerimeter() > maxKolko)
		{

			maxKolko = c.getPerimeter();
			maxKolkoPozycja = temp1;
		}
		temp1++;
	}

	temp1 = 0;
	for (auto s : squaers)
	{
		if (s.getPerimeter() > maxKolko)
		{

			maxKwadrat = s.getPerimeter();
			maxKwadratPozycja = temp1;
		}
		temp1++;

	}

	std::cout << "Figura o największym obwodzie:\n";
	if (maxKolko >= maxKwadrat) {

		circles[maxKolkoPozycja].printResult();
	}
	else if (maxKolko < maxKwadrat) {

		squaers[maxKwadratPozycja].printResult();
	}
	else
		std::cout << "error";
}

void ShapeCollection::getLargestShapeByArea()
{
	double maxKolko = 0;
	int maxKolkoPozycja = 0;
	double maxKwadrat = 0;
	int maxKwadratPozycja = 0;

	int temp1 = 0;
	for (auto c : circles)
	{
		if (c.getArea() > maxKolko)
		{

			maxKolko = c.getArea();
			maxKolkoPozycja = temp1;
		}
		temp1++;
	}

	temp1 = 0;
	for (auto s : squaers)
	{
		if (s.getArea() > maxKolko)
		{

			maxKwadrat = s.getArea();
			maxKwadratPozycja = temp1;
		}
		temp1++;

	}

	std::cout << "Figura o najwiekszym obwodzie:\n";
	if (maxKolko >= maxKwadrat) {

		circles[maxKolkoPozycja].printResult();
	}
	else if (maxKolko < maxKwadrat) {

		squaers[maxKwadratPozycja].printResult();
	}
	else
		std::cout << "error";
}

void ShapeCollection::getFormulas()
{
	if (squaers.size() > 0)
	{
		std::cout << "Kwadraty:\n";
		squaers[0].printPerimeterFormula();
		std::cout << std::endl;
		squaers[0].printAreaFormula();

	}
	if (circles.size() > 0)
	{
		std::cout << "\nKolka:\n";
		circles[0].printPerimeterFormula();
		std::cout << std::endl;
		circles[0].printAreaFormula();
	}
}
