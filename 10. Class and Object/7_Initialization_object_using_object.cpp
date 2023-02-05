#include <iostream>
using namespace std;
class Circle
{
    int R;

public:
    void init(float r);
    void showNum();
    int fact();
};
void Circle::init(float r)
{
    R = r;
}

void Circle::showNum()
{
    cout << "You entered the number is " << R << endl;
}
int Circle::fact()
{
    int f = 1;
    for (int i = 1; i <= R; i++)
    {
        f = f * i;
    }
    cout << "Factriol of " << R << " is " << f << endl;
}
int main()
{
    Circle c;
    c.init(5);
    c.showNum();
    c.fact();
    return 0;
}