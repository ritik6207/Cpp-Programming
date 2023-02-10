#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void disply()
    {
        cout << "Complex is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 7);
    c1.disply();

    Complex c2(6);
    c2.disply();

    Complex c3;
    c3.disply();

    return 0;
}