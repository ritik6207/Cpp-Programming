// Different Technique to initialize Data members in Constructor
#include <iostream>
using namespace std;
class Distance
{
    int feet;
    float inch;

public:
    Distance() : feet(0), inch(0.00) {}
    Distance(int ft, float f) : feet(ft), inch(f) {}
    void getDist()
    {
        cout << "Enter the value of feet and inches " << endl;
        cin >> feet >> inch;
    }
    void show()
    {
        cout << feet << "\'" << inch << "\"" << endl;
    }
};

int main()
{
    Distance d1, d2;
    d2.getDist();
    Distance d3(45, 56.8);
    cout << "Dist-1" << endl;
    d1.show();                      //take default constructor
    cout << "Dist-2" << endl;
    d2.show();                      //take user input
    cout << "Dist-3" << endl;
    d3.show();                     

    return 0;
}