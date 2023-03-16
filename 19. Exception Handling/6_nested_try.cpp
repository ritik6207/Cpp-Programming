#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Welcome\n";
        try
        {
            cout << "To inner Try block\n";
            throw 10;
        }
        catch (...)
        {
            cout << "Throw working\n";
            throw 'x';
        }
    }
    catch (...)
    {
        cout << "Outer Try block\n";
    }
    return 0;
}