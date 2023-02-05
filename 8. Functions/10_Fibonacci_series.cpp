#include <iostream>
using namespace std;
int fibo(int);
int main()
{
    int n, f;
    cout << "Enter the number: ";
    cin >> n;
    f = fibo(n);
    cout << n << "th term of Fibonacci series is = " << f;
}
int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}