#include <iostream>
using namespace std;

class Volume
{
    int length, breadth, height;

public:
    Volume(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
        cout << "Length of rectangle is " << length << endl;
        cout << "breadth of rectangle is " << breadth << endl;
        cout << "height of rectangle is " << height << endl;
    }

    void disply()
    {
        cout << "volume of rectangle is " << length * breadth * height << endl;
    }
};

int main()
{
    Volume v(2, 4, 8);
    v.disply();

    return 0;
}