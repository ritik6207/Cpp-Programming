#include <bits/stdc++.h>  //Also wirte iostream
using namespace std;
int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void Prime_factors(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter number You want to prime factorization: ";
    cin >> n;
    Prime_factors(n);
    return 0;
}