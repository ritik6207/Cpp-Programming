#include <iostream>
using namespace std;

int main()
{
    int a, b;
    try
    {
        cout << "Enter two number" << endl;
        cin >> a >> b;
        if (b == 0)
            throw 0;
        cout << "Division = " << a / b << endl;
    }
    catch (int x)
    {
        cout << "Division is not posible:" << '\n';
    }

    return 0;
}