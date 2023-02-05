#include <iostream>
using namespace std;
struct Distace
{
    int feet;
    float ichaes;
};
void disply(Distace d)
{
    cout << "\nDistace = " << d.feet << "\n'-" << d.ichaes << "\"";
}
int main()
{
    Distace d1;
    Distace d2;
    cout << "\n Enter the feet and ichaes: ";
    cin >> d1.feet >> d1.ichaes;
    d2 = d1;
    disply(d1);
    disply(d2);
}