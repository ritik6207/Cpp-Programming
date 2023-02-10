#include<iostream>
using namespace std;
class Demo
{
    public:
    Demo()
    {
        cout<<"This is constructor... "<<endl;
        cout<<"This is called without object "<<endl;
    }
};

int main()
{
    Demo d;
}