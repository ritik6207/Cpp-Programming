#include <iostream>
#define PI 3.14
using namespace std;
class Circle
{
    float radious;

public:
    void setRadious();
    void showRadioua();
    float getRadious();
};
void Circle::setRadious()
{
    cout << "Enter the Radious " << endl;
    cin >> radious;
}
float Circle::getRadious()
{
    return radious;
}

Circle createCircle()
{
    Circle c;
    c.setRadious();
    return c;
}

float CalArea(Circle c)
{
    float ar;
    ar = PI * c.getRadious() * c.getRadious();
    return ar;
}
void Circle::showRadioua()
{
    cout << "Radious is " << radious << endl;
}
int main()
{
    Circle c1 = createCircle();
    c1.showRadioua();
    float a = CalArea(c1);
    cout << "Area of Circle is " << a << endl;
}