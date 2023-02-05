#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double x =45;
    cout<<cos(x)<<endl;     //cosine of x
    cout<<sin(x)<<endl;     //sine of x
    cout<<tan(x)<<endl;     //tnagent of x
    cout<<asin(x)<<endl;    //inverse sine of x
    cout<<acos(x)<<endl;    //inverse cosine of x
    cout<<atan(x)<<endl;    //inverse tangent of x
    double y=3;
    cout<<atan2(x,y)<<endl;  //inverse tangent of a coordinate x and y  //atan2(x,y)=tan-1(x/y)
    return 0;
}