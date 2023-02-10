#include <iostream>
using namespace std;
class Distance
{
    int feet;
    float inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0.00;
    }
    Distance(int ft, float in)
    {
        feet = ft;
        inch = in;
    }
    void disply()
    {
        cout << feet << "\'" << inch << "\"" << endl;
    }
};
int main()
{
    Distance d1 = Distance();
    Distance d2 = Distance();
    Distance d3(12, 5.67);
    cout << "Dist-1 " << endl;
    d1.disply();                       //in output take default constructor
    cout << "Dist-2 " << endl;
    d2.disply();
    cout << "Dist-3 " << endl;
    d3.disply();

    return 0;
}