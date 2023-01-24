#include<iostream>
using namespace std;
int main()
{
    int i,n,flag=0;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    for ( i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        cout<<"Number is not Prime: "<<endl;
    }
    else
    {
        cout<<"Number is Prime: "<<endl;
    }
}