#include<iostream>
using namespace std;
int main()
{
    int i,n,x,sum=0,r;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    x=n;
    while (n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (sum==x)
    {
        cout<<"Number is Aramstorng: "<<endl;
    }
    else
    {
        cout<<"Number is Not Armstorng: "<<endl;
    }
    return 0;
}