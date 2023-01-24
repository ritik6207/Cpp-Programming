#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for ( i = 1; i <= n/2; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==n)
    {
        cout<<"It is perfect number: "<<endl;
    }
    else
    {
        cout<<"It is not perfect number: "<<endl;
    }
}