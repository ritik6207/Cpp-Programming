#include <iostream>
#define PI 3.14
using namespace std;

class Circle
{
    float radious;

public:
    void init(float r);
    void getRadiosu();
    float area();
    void showRadious();
};
void Circle::init(float r)
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
    cout << "\n Radious : " << radious;
}

int main()
{
    Circle c1, c2;
    c1.init(10);
    c1.getRadiosu();
    float f = c1.area();
    cout << "Area of circle is " << f << endl;

    return 0;
}