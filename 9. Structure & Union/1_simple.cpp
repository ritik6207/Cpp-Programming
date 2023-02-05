#include <iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
int main()
{
    Distance d1, d2;
    cout << "\n Enter feet : ";
    cin >> d1.feet;
    cout << "\n Enter inches: ";
    cin >> d2.inches;
    cout << "\n" << d1.feet << "\'-" << d1.inches << "\"";
    cout << "\n" << d2.feet << "\'-" << d2.inches << "\"";
}