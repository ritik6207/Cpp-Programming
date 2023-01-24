#include<iostream>
using namespace std;
int main()
{
    long int n,x,rev=0,r;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    x=n;
    while (n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    cout<<"Reversed number "<<rev<<endl;
    if (rev==x)
    {
        cout<<"It is a Palindorme number: "<<endl;
    }
    else
    {
        cout<<"It is not a Palindorme number: "<<endl;
    }
    return 0;
}