#include <iostream>
using namespace std;
/*
Class 1:
class B:public A{
    Order of execution of  Constructor -> first A() then B()
};

Case 2:
class A: pubic B, public C{
    Order of execution of constructor -> B() then C() and  A()
};

case 3:
class A : public B, vitual public C{
    order of execution of constructor -> C() then B() and A()
};
*/

class Base1
{
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base1 class constructor Called" << endl;
    }
    void pintDataBase1(void)
    {
        cout << "The value of data 1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int b)
    {
        data2 = b;
        cout << "Base2 class constructor Called" << endl;
    }
    void pintDataBase2(void)
    {
        cout << "The value of data 2 is " << data2 << endl;
    }
};

class Derived : public Base1,  public Base2
{
    int derived1;
    int derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived d(1, 2, 3, 4);
    d.pintDataBase1();
    d.pintDataBase2();
    d.printDataDerived();

    return 0;
}