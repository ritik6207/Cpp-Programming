#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    int& x=a;
    float& y=b;
    a=23;
    cout<<"value of a: "<<a<<endl;
    cout<<"value of a refrence : "<<x<<endl;
    b=78.45;
    cout<<"value of b: "<<b<<endl;
    cout<<"value of b refrence : "<<y<<endl;
    return 0;
}