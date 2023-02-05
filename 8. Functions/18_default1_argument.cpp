#include <iostream>
using namespace std;
float simp_int(float = 1000, float = 10, float = 3);     //these are default value 
int main()
{
    float si, p, r, t;
    si = simp_int(2000, 15, 2);
    cout << "\n Simple interest " << si;
    si = simp_int(500, 110);               //default take  t
    cout << "\n Simple interest " << si;
    si = simp_int(200);                    //default take r and t
    cout << "\n Simple interest " << si;
    si = simp_int();                       //default take p , r and t
    cout << "\n Simple interest " << si;
}
float simp_int(float p, float r, float t)
{
    float si;
    si = (p * r * t) / 100;
    return si;
}