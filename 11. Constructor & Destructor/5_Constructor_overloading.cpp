#include <iostream>
#define PI 3.14
using namespace std;

class Circle
{
    float radious;

public:
    Circle();
    Circle(float);
    void getRadiosu();
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
void Circle::getRadiosu()
{
    cout << "Enter the radious" << endl;
    cin >> radious;
}
float Circle::area()
{
    return PI * radious * radious;
}
void Circle::showRadious()
{
    cout << "\n Radious : " << radious << endl;
}

int main()
{
    Circle c1;
    c1.showRadious();
    float f = c1.area();
    cout << " Area of circle is " << f << endl;

    return 0;
}