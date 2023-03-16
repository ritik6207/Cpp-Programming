#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "I am constructor\n";
    }
    ~Test()
    {
        cout << "I am Dectructor\n";
    }
};

int main()
{
    try
    {
        cout << "Welcome to the Exception handling\n";
        Test t; //obj created
        throw 10;
        cout << "Testing dectructor\n";
    }
    catch (...)
    {
        cout << "Thank You\n";
    }
    return 0;
}