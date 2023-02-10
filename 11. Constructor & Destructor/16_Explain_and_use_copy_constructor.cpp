#include <iostream>
using namespace std;
class Distance
{
    int feet;
    float inchs;

public:
    Distance()
    {
        feet = 0;
        inchs = 0.0;
    }
    Distance(int ft, float in)
    {
        feet = ft;
        inchs = in;
    }
    Distance(Distance &d)
    {
        feet = d.feet;
        inchs = d.inchs;
    }
    void show()
    {
        cout << feet << "\'" << inchs << "\"" << endl;
    }
};
int main()
{
    Distance d1(34, 5.7);
    Distance d2(d1);    //Copy the value of d1 in d2
    Distance d3 = d1;   //also d3
    cout << "Dist-1" << endl;
    d1.show();
    cout << "Dist-2" << endl;
    d2.show();
    cout << "Dist-3" << endl;
    d3.show();

    return 0;
}