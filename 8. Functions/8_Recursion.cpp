#include <iostream>
using namespace std;
long fact(int);
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    long  f = fact(n);
    cout << "Factriol is " << f;
}
long fact(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}