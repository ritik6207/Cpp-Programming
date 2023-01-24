#include<iostream>
using namespace std;
int main()
{
    long int n,r,sum=0;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    while (n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<"Sum of digit is given number is "<<sum;
}
