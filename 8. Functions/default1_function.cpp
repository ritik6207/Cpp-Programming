#include <iostream>
using namespace std;
int sum(int a, int b = 0, int c = 0, int d = 0);
// default argument values can be provided either in decleration or in defintinon
int main()
{
    cout << sum(10, 20, 30) << "\n";
    cout << sum(10, 20, 45, 12) << "\n";
    cout << sum(10, 20, 45) << "\n";
    cout << sum(10, 20) << "\n";
    cout << sum(10) << "\n";
    return 0;
}
int sum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}