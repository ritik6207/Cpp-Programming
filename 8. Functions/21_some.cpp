// program to return multiple values from function using reference
#include <iostream>
using namespace std;
void AreaCircum(float, float &, float &);
int main()
{
    float radius, area, circum;
    cout << "\n Enter a radious ";
    cin >> radius;
    AreaCircum(radius, area, circum);
    cout << "\n Area of circle = " << area << "\n Circumference of Circle = " << circum;
}
void AreaCircum(float r, float &ar, float &cir)
{
    ar = 3.141 * r * r;
    cir = 2 * 3.141 * r;
}