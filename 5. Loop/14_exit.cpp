#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter any vlaue of number:\n";
    cin>>n;
    for ( i = 2; i <= n/2; i++)
    {
        if(n%i==0)
        {
            cout<<"number is not prime:"<<endl;
            exit(0);
        }
    }
    cout<<"Number is Prime: "<<endl;
    return 0;
}