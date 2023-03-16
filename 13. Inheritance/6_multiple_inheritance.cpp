#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
/*  class Derived: visibillity-mode base1, visibillity-mode base2, (and you can add more class )
{
    class body of class "Derived"
}
*/

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public base1, public base2, public base3
{
public:
    void disply()
    {
        cout << "the value of base 1 is " << base1int << endl;
        cout << "The value of base 2 is " << base2int << endl;
        cout << "The value of base 3 is " << base3int << endl;
        cout << "The value of base 3 is " << base1int + base2int + base3int << endl;
    }
};

int main()
{
    Derived d;
    d.set_base1int(5);
    d.set_base2int(8);
    d.set_base3int(7);
    d.disply();

    return 0;
}