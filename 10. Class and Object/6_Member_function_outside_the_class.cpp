#include <iostream>
#define PI 3.14
using namespace std;
class OutsideClass
{
    float r;

public:
    void getRadious();
    void showRadious();
    void area();
};
void OutsideClass::getRadious()
{
    cout << "Enter the value of Radious" << endl;
    cin >> r;
}
void OutsideClass::showRadious()
{
    cout << "YOu entered the value of Radious " << r << endl;
}
void OutsideClass::area()
{
    float ar;
    ar = PI * r * r;
    cout << "Area of circle is " << ar << endl;
}
int main()
{
    OutsideClass o;
    o.getRadious();
    o.showRadious();
    o.area();
    return 0;
}