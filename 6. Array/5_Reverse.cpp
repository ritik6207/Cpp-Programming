// Reverse an array elements without using second arry
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,j,t;
    cout<<"Enter the elements of array: "<<endl;
    for ( i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before reversing  the elements of array: "<<endl;
    for ( i = 0; i < 5; i++)
    {
        cout<<" "<<arr[i];
    }
    for ( i = 0,j=5-1; i <= 5/2; i++,j--)
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    cout<<"\nAfter reversing  the elements of array: "<<endl;
    for ( i = 0; i < 5; i++)
    {
        cout<<" "<<arr[i];
    }
}