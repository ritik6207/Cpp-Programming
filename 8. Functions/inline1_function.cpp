#include <iostream>
using namespace std;
inline float mul(float a, float b)
{
    return (a * b);
}
inline float div(float a, float b)
{
    return (a / b);
}
int main()
{
    float a, b;
    cout << "Enter the value of A and B: " << endl;
    cin >> a >> b;
    cout << "Multipication of two number is " << mul(a, b) << endl;
    cout << "Division of two number is " << div(a, b) << endl;
}