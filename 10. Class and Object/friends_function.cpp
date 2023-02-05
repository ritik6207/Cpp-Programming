#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    // Below the line meanas that non member - sumComplex funtion is allowed to do anything with my private parts (members)
    friend Complex sumComlex(Complex o1, Complex o2);  //declear public and private both
    void print()
    {
        cout << "complex number is " << a << "+" << b << "i" << endl;
    }
};

Complex sumComlex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setData(2, 4);
    c1.print();

    c2.setData(4, 5);
    c2.print();

    sum = sumComlex(c1, c2);
    sum.print();

    return 0;
}

/* Properties of friend function
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that . c1.sumComplex == Invalid
3. Can be invoked without the help of any object
4. Usually contans the obects as arguments
5. Can be declared inside public or private section of the class
6. It can not access the members directly by their names and need object_name.member_name to access any member.

*/