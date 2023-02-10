#include <iostream>
#define PI 3.14
using namespace std;
class Circle
{
    float radious;

public:
    Circle();
    Circle(float);
    Circle(Circle &);
    void getRadious();
    float area();
    void showRadious();
};

Circle::Circle()
{
    radious = 10;
}

Circle::Circle(float r)
{
    radious = r;
}

Circle::Circle(Circle &c)
{
    radious = c.radious;
}

void Circle::getRadious()
{
    cout << "Ener the radious " << endl;
    cin >> radious;
}

float Circle::area()
{
    float ar;
    ar = PI * radious * radious;
    return ar;
}

void Circle::showRadious()
{
    cout << "\n Radious : " << radious << endl;
}

int main()
{
    Circle c(10);
    Circle c1(c);
    c1.showRadious();
    float a = c1.area();
    cout << "\n Area of circle is " << a << endl;
}