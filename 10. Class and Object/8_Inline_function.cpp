#include <iostream>
using namespace std;
class inlineFucntion
{
public:
    inline float mul(float a, float b)
    {
        return a * b;
    }
    inline float cube(float a)
    {
        return a * a * a;
    }
};
int main()
{
    inlineFucntion i;
    int a, b;
    cout << "Enter the value of a nd b" << endl;
    cin >> a >> b;
    cout << "Multipication is " << i.mul(a, b) << endl;
    cout << "Cube is " << i.cube(a) << " " << i.cube(b) << endl;

    return 0;
}