#include<iostream>
using namespace std;
int main()
{
    int a[5],i,sum=0;
    float avg;
    cout<<"Enter the element of array: "<<endl;
    for ( i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i < 5; i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum of total element is "<<sum<<endl;
    avg=sum/5;
    cout<<"Average of element is "<<avg;
}