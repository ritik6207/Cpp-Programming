#include <iostream>
#define PI 3.14
using namespace std;
class This
{
    float radious;

public:
    void setRadious(float radious);
    float getRadious();
    float area();
};

void This::setRadious(float radious)
{
    this->radious = radious;
}
float This::getRadious()
{
    return this->radious;
}
float This::area()
{
    return PI * radious * radious;
}

int main()
{
    This t;
    t.setRadious(10);
    float a = t.area();
    cout << "Radious is " << t.getRadious() << endl;
    cout << "Area of circle is " << a << endl;

    return 0;
}