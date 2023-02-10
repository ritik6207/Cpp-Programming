// Characteristics of Contructor
/* 1. It should be declared in the public section of the class
2. They are aucomatically invoked(call) whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // Creating a contructor
    // Constructor ia special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automaticlly invoked(call) whenever an object is crated
    Complex(void);  //Constructor decleration

    void printNumber()
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};

Complex::Complex(void)  //---> This is default constructor as it take no parameters
{
    a = 12;
    b = 45;
    // cout<<"Hello world"<<endl;  //Y can also print anyting in contructor
}
int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}