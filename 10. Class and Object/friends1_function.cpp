#include <iostream>
using namespace std;

// forward decleration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumComComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    //Individually declearing function as friends
    /*friend int Calculator::sumRealComplex(Complex, Complex);
    friend int Calculator::sumComComplex(Complex, Complex);*/
    
    //Aliter: Declaring the entire calculator class as friend
    friend class Calculator;

public:
    int setNumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void print()
    {
        cout << "Complex number is " << a << "+" << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumComComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 3);
    o2.setNumber(3, 5);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "the sum of Real part of o1 and o2 is " << res << endl;
    int resc = calc.sumComComplex(o1, o2);
    cout << "the sum of Com part of o1 and o2 is " << resc << endl;
    return 0;
}