#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

// Function Object (functor) : Function wrapped in a calss so that avilable like an object


int main()
{
    int arr[] = {1, 34,7 , 8l, 22 , 0, 2, 3};
    // sort(arr, arr+7);  // assending order 
    sort(arr, arr+7 , greater<int>());  // dssending order 
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
   return 0;
}