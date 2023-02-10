#include <iostream>
using namespace std;
class A
{
    int x;

public:
    A(int a)
    {
        x = a;
    }
    void show()
    {
        cout << " x : = " << x << endl;
    }
};

int  main()
{
    int a;
    cout << "Enter the value of a " << endl;
    cin >> a;
    A a1(a);
    a1.show();
    return 0;
}