#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,s,ar;
    cout<<"Enter the value of a , b and c:\n";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of triangle is "<<ar;
    return 0;
}