#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << " Hello friends " << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << " Ki haal dost " << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet();     //If same function in two different class We use Ambiguity Resolution in Derived class for inheritance
        Base2::greet();
    }
};

int main()
{
    Base1 b1;
    Base2 b2;
    b1.greet();
    b2.greet();
    Derived d;
    d.greet();

    return 0;
}