#include <iostream>
using namespace std;
void cube(int &);
int main()
{
    int a = 10;
    cube(a);
    cout << "\n a = " << a << endl;
}
void cube(int &x)
{
    x = x * x * x;
    cout << "\n x = " << x << endl;
}