// inline function with constant argument
#include <iostream>
using namespace std;
const float PI = 3.141;
inline float area(const float r)
{
    return (PI * r * r);
}
int main()
{
    float radious;
    cout << "Enter the radious of circle :: ";
    cin >> radious;
    cout << "area of circle is " << area(radious);
}