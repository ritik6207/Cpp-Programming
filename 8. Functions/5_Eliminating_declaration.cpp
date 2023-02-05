// Program to Eliminate function declaration with function definition at top
#include <iostream>
using namespace std;

//Eliminating declaration.
void show(int x)        
{
    cout << "\n x = " << x;
}
int main()
{
    int a = 10;
    show(a);
}