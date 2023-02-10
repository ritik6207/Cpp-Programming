#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found , compiler its own copy Constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!! " << endl;
        a = obj.a;
    }
    void disply()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.disply();
    y.disply();
    z.disply();

    Number z1(z); // copy constructor invoked
    z1.disply();

    z2 = z; // Copy constructor not called
    z2.disply();

    Number z3 = z; // Copy constructor invoked
    z3.disply();
    // z1 shuould exactly resemble z or x or y
    return 0;
}