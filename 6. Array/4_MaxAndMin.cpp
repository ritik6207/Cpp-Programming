#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[5],min,max;
    cout<<"Enter the element of Array: "<<endl;
    for ( i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    min=arr[0];
    max=arr[0];
    for ( i = 0; i < 5; i++)
    {
        if(min>arr[i])
            min=arr[i];
        if(max<arr[i])
            max=arr[i];
    }
    cout<<"\n Minimum value is = "<<min;
    cout<<"\n Minimum value is = "<<max;
}