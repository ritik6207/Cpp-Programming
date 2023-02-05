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
    Circle c1,c2;
    c1.getRadious();
    c1.showRadious();
    c1.area();

    
    c2.getRadious();
    c2.showRadious();
    c2.area();
    
    return 0;
}