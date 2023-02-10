#include <iostream>
using namespace std;
class Test
{
    int a;

public:
    void getA()
    {
        cin >> a;
    }
    void operator==(Test t2)  //this is overloaded function
    {
        if (a == t2.a)
            cout << "Object are equal " << endl;
        else
            cout << "Object are not equal " << endl;
    }
};
int main()
{
    Test t1, t2;
    cout << "Enter t1 object A value " << endl;
    t1.getA();
    cout << "Enter t2 Object A value " << endl;
    t2.getA();
    t1 == t2;   //This is overloading operation

    return 0;
}