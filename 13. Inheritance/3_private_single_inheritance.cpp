#include <iostream>
using namespace std;
// Base class
class Base
{
    int data1;     //private by default and is not inheritablae

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base::setData()
{
    data1 = 8;
    data2 = 4;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derive : private Base      //Class is being derived private
{
    int data3;

public:
    void process();
    void disply();
};

void Derive::process()
{
    setData();
    data3 = data2 * getData1();
}

void Derive::disply()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
}

int main()
{
    Derive der;
    // der.setData();
    der.process();
    der.disply();
    return 0;
}