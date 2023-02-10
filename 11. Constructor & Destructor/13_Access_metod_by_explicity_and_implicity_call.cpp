#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A(int, int);
    void show()
    {
        cout << "Value of A is = " << a << endl;
        cout << "Value of B is = " << b << endl;
    }
};
A::A(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    A obj1 = A(23, 56);
    A obj2(78, 23);
    cout << "By Explicity Method " << endl;
    obj1.show();
    cout << "By implicity Method " << endl;
    obj2.show();

    return 0;
}