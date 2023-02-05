// constant argument to function
#include <iostream>
using namespace std;
void disply(const int);
int main()
{
    int a = 10;
    disply(a);
    cout << "\n a = " << a;
}
void disply(const int b )
{
    // b = 20;                 //can't be changed
    cout << "\n b = " << b;
}