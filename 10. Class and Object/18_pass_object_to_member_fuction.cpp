#include <iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;

public:
    void getDist()
    {
        cout << "Enter feet & Inches: " << endl;
        cin >> feet >> inches;
    }
    void showDist()
    {
        cout << feet << "\'" << inches << "\"" << endl;
    }
    void addDist(Distance, Distance);
};

void Distance::addDist(Distance dd1, Distance dd2)
{
    feet = dd1.feet + dd2.feet;
    inches = dd1.inches + dd2.inches;
    if (inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
}

int main()
{
    Distance d1, d2, d3;
    d1.getDist();
    d2.getDist();
    d3.addDist(d1, d2);
    cout << endl;
    d1.showDist();
    cout << "+";
    d2.showDist();
    cout << "=";
    d3.showDist();

    return 0;
}