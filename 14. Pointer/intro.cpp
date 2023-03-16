#include<iostream>
using namespace std;
int main()
{
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of A is "<<*(ptr)<<endl;

    // new keyword(operator)

    int *p = new int (50);
    cout<<"The value of address P is "<<*(p)<<endl;

    int *arr1 = new int[3];
    arr1[0] = 23;
    *(arr1+1) = 56;
    arr1[2] = 45;
    cout<<"The value of arr[0] is "<<arr1[0]<<endl;
    cout<<"The value of arr[1] is "<<arr1[1]<<endl;
    cout<<"The value of arr[2] is "<<arr1[2]<<endl;

    // Delete keyword(operator)

    int *arr = new int[3];
    arr[0] = 23;
    *(arr+1) = 56;
    arr[2] = 45;
    delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

}