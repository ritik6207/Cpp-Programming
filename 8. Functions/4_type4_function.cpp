// Argument with return type
#include <iostream>
using namespace std;
long fact(long);
int main()
{
    int n, f;
    cout << "Enter the number: " << endl;
    cin >> n;
    f = fact(n);
    cout << "Factriol is " << f;
}
long fact(long a)
{
    long f = 1;
    int i;
    for (i = 0; i < a; i++)
    {
        f += f * i;
    }
    return f;
}