#include<iostream>
using namespace std;
int main()
{
    int num[5],i;
    for ( i = 0; i < 5; i++)
    {
        cout<<"Enter the value "<<(i+1)<<":: ";
        cin>>num[i];
    }
    cout<<"\nThe element are:- ";
    for ( i = 0; i < 5; i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}