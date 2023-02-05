#include <iostream>
using namespace std;
inline float lbstokg(float pound)
{
    return 0.453 * pound;
}
int main()
{
    float lbs;
    cout << "Enter your weight in pounds:: " << endl;
    cin >> lbs;
    cout << "Your weight in kilogrma::: " << lbstokg(lbs);
}