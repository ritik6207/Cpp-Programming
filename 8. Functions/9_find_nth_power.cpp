// Program to find nth power of x using Recursion 
#include <iostream>
using namespace std;
long power(int, int);
int main()
{
    long x, n, p;
    cout << "Enter the Base: ";
    cin >> x;
    cout << "Enter the power: ";
    cin >> n;
    p = power(x, n);
    cout << n << "th power of " << x << " is = " << p;
}
long power(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return (x * power(x, n - 1));
}