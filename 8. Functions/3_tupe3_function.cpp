// Argument but no return type
#include <iostream>
using namespace std;
void simp_int(float, float, float);
int main()
{
    int p, r, t;
    cout << "Enter the principal , rate and time: " << endl;
    cin >> p >> r >> t;
    simp_int(p, r, t);
}
void simp_int(float p, float r, float t)
{
    float si;
    si = (p * r * t) / 100;
    cout << "\nSimple interest is " << si;
}