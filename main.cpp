#include <iostream>
#include "square.h"
#include "Circle.h"
#include "ShapeCollection.h"

int main() {

    int choice;
    ShapeCollection mojaKolekcja;
    while (true) {
        std::cout << "1.Add new shape\n2.Show All shapes\n3.Show shape with the largest pprimeter\n4Show shape with the largest area\n5.Quit\n6.Formulas\nChoice:";
        std::cin >> choice;

        if (choice == 1) {

            std::cout << "1.Add Square\n2.Add Circle\nChoice: ";
            std::cin >> choice;
            if (choice == 1)
                mojaKolekcja.addShape("Square");
            else if (choice == 2)
                mojaKolekcja.addShape("Circle");
            else
                std::cerr << "error";

        }
        else if (choice == 2)
            mojaKolekcja.getShapesTable();
        else if (choice == 3)
            mojaKolekcja.getLargestShapeByPerimeter();
        else if (choice == 4)
            mojaKolekcja.getLargestShapeByArea();
        else if (choice == 5)
            break;
        else if (choice == 6)
        {
            mojaKolekcja.getFormulas();

        }

        else
            std::cerr << "Error";

    }
    return 0;