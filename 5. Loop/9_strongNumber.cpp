#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,r,f,x;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    x=n;
    while (n!=0)
    {
        r=n%10;
        f=1;
        for ( i = 1; i <= r; i++)
        {
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    if (sum==x)
    {
        cout<<"Number is Strong: \n";
    }
    else
    {
        cout<<"Number is not storng: \n";
    }
    return 0;
}