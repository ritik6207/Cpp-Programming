#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    void setData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void sumOfComlex(Complex o1, Complex o2)
    {
        a = o1.a + o1.a;
        b = o2.b + o2.b;
    }
    void print()
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 4);
    c1.print();

    c2.setData(1, 4);
    c2.print();

    c3.sumOfComlex(c1, c2);
    c3.print();
}