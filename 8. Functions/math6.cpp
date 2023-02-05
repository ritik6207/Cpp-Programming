#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x = 100, y, z;
    y = log(x);       //Natural logarithm of x(base e)
    z = log10(x);     //Longarithm of x (base 10)
    cout << y << endl;
    cout << z << endl;
    return 0;
}