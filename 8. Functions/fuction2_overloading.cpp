#include <iostream>
using namespace std;
int volume(int);
double volume(double, int);
long volume(long, int, int);
int main()
{
    cout << "Cube is " << volume(10) << "\n";
    cout << "Cylinder is " << volume(2.5, 8) << "\n";
    cout << "Rectangular Box is " << volume(100L, 75, 15) << "\n";
}
int volume(int s)
{ // Cube
    return (s * s * s);
}
double volume(double r, int h)
{ // Cylinder
    return (3.14519 * r * r * h);
}
long volume(long l, int b, int h)
{ // Rectangular Box
    return (l * b * h);
}