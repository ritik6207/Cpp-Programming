#include <iostream>
using namespace std;
class height;     //forward declearation
class width
{
    int w;

public:
    void getData(int wt)
    {
        w = wt;
        cout << "Width: " << w << endl;
    }
    friend void area(width, height);
};
class height
{
    int h;

public:
    void getData(int ht)
    {
        h = ht;
        cout << "Height: " << h << endl;
    }
    friend void area(width, height);
};
void area(width n, height m)
{
    int a;
    a = n.w * m.h;
    cout << "Area is " << a << endl;
}
int main()
{
    width n;
    height m;
    n.getData(10);
    m.getData(20);
    area(n, m);

    return 0;
}