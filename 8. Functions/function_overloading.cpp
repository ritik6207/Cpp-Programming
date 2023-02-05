#include <iostream>
using namespace std;
int MyMax(int, int);
int MyMax(int, int, int);
int main()
{
    int a = 12, b = 45, c = 67;
    cout << MyMax(a, b) << "\n";
    cout << MyMax(a, b, c) << "\n";
}
int MyMax(int a, int b)
{
    return (a > b) ? a : b;
}
int MyMax(int a, int b, int c)
{
    return MyMax(MyMax(a, b), c);
}