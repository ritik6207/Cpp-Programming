#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float ci,p,r,t,a;
    cout<<"Enter Principle , Rate of Insterst and time:\n";
    cin>>p>>r>>t;
    a=p*pow((1+(r/100)),t);
    ci=a-p;
    cout<<"compound interst = Rs. "<<ci;
    return 0;
}