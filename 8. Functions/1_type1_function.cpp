// No argument no return type
#include <iostream>
using namespace std;
void simp_int();
int main()
{
    simp_int();
}
void simp_int()
{
    float p, r, t, si;
    cout << "Enter principal, rate and time: ";
    cin >> p >> r >> t;
    si = (p * r * t) / 100;
    cout << "\n Simple interest = " << si;
}