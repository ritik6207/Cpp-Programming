#include <iostream>
using namespace std;
class A
{
    int x;

public:
    A(int a = 10)
    {
        x = a;
    }
    void show()
    {
        cout << "Value of x = " << x << endl;
    }
};

int main()
{
    A a;
    A a1(100);
    a.show();   //take default value of given argument 
    a1.show();
    return 0;
}