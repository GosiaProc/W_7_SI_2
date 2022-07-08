
#include "Shape.h"
class Circle :
    public Shape
{
    private:
        int r;
        double calculateArea();
        double calculatePerimeter();
    public:
        Circle(std::string name);
        void printResult();
};
