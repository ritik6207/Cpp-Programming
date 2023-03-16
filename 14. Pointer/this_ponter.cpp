#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // A & set_Data(int a)
    void set_Data(int a)
    {
        this->a = a;
        // return *this;
    }
   
    void get_Data()
    {
        cout << "The value of A is " << a << endl;
    }
};

int main()
{
    // this is a pointer which is a points to the object which invokes the member function
    A a;
    // a.set_Data(7).get_Data();   // when you use Address of constructor and return this keyword in constructor body   // also use (.) operator  in LHS
    a.set_Data(9);
    a.get_Data();

    return 0;
}