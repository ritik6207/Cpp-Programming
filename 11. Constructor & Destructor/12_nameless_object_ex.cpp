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
        cout << "Value of X is " << x << endl;
    }
};

int main()
{
    // Here no object declear , in nameless object method we use class name 
    A().show();
    A(100).show();

    return 0;
}