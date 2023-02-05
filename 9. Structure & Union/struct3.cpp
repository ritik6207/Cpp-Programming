// Like class , we have constructor,datructor,function in a structure, By default structure takes Public class
#include<iostream>
using namespace std;
struct Point
{
    int x,y;
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    Point p(10,20);
    p.print();
    return 0;
}