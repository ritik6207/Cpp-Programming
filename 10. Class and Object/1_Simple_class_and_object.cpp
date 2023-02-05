#include<iostream>
using namespace std;
#define PI 3.14
class Circle
{
    private:
    float r;
    public:
    void getRadious()
    {
        cout<<"Enter the value of radious"<<endl;
        cin>>r;
    }
    void showRadious()
    {
        cout<<"You entered the radious "<<r<<endl;
    }
    void area()
    {
        float ar;
        ar=PI*r*r;
        cout<<"Area of circle is "<<ar<<endl;
    }
};

int main()
{
    Circle c;
    c.getRadious();
    c.showRadious();
    c.area();
    
    return 0;
}