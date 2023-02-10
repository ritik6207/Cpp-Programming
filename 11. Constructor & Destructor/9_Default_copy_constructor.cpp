#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A() {}
    A(int a)
    {
        x = a;
    }
    void showX()
    {
        cout << "\n x : " << x;
    }
};

int main()
{
    A a1(10);
    A a2;
    a1.showX();

    a2 = a1;
    a2.showX();

    A a3 = a1;
    a3.showX();

    A a4 = a1;
    a4.showX();

    return 0;
}