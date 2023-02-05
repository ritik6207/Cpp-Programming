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
void Circle::showRadioua()
{
    cout << "Radious is " << radious << endl;
}
float Circle::getRadious()
{
    return radious;
}

float CalArea(Circle c)
{
    float ar;
    ar = PI * c.getRadious() * c.getRadious();
    return ar;
}
int main()
{
    Circle c1;
    c1.setRadious();
    c1.showRadioua();
    float a = CalArea(c1);
    cout << "Area of Circle is " << a << endl;
}