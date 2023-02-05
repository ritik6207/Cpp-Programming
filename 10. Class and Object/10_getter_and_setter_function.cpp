#include <iostream>
#define PI 3.14
using namespace std;
class Circle
{
    float R;

public:
    void setRadious(float r);
    float getRadious();
    inline float area();
};
void Circle::setRadious(float r)
{
    R = r;
}
float Circle::getRadious()
{
    return R;
}
inline float Circle::area()
{
    return PI * R * R;
}
int main()
{
    Circle c1;
    c1.setRadious(5);
    float a = c1.area();
    cout << "Radiou of circle is " << c1.getRadious()<<endl;
    cout << "Area of circle is " << a << endl;

    return 0;
}