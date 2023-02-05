#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double x = 2;
    cout<<cosh(x)<<endl; //Hyperbolic cosine of x  //(e^x+e^-x)/2
    cout<<sinh(x)<<endl; //Hyperbolic sine of x  //(e^-e^-x)/2
    cout<<tanh(x)<<endl; //Hyperbolic tan of x  //(e^x-e^-x)/(e^x+e^-x)
    cout<<acosh(x)<<endl; //arc hyperbolic cosine of x  //cosh^-1=acosh(x)
    cout<<asinh(x)<<endl; //arc hyperbolic sine of x  //sinh^-1=asinh(x)
    cout<<atanh(x)<<endl; //arc hyperbolic tan of x //tanh^-1=atanh(x)
    return 0;
}