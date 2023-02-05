#include <iostream>
#define PI 3.14
using namespace std;
class otinline
{
    float R;

public:
    void init(float r);
    void getRadious();
    void showRadious();
    float area();
};
void otinline::init(float r)
{
    R = r;
}
/*void otinline::getRadious()
{
    cout << "Enter the radious " << endl;
    cin >> R;
}*/
void otinline::showRadious()
{
    cout << "You entered the number is " << R << endl;
}
inline float otinline::area()    //Here using inline function
{
    float f;
    f = PI * R * R;
    cout << "Area of circle is " << f << endl;
}
int main()
{
    otinline o;
    o.init(5);
    // o.getRadious();
    o.showRadious();
    o.area();

    return 0;
}