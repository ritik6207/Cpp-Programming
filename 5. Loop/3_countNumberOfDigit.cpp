#include<iostream>
using namespace std;
int main()
{
    long int n,c;
    cout<<"Enter the positive number: "<<endl;
    cin>>n;
    c=0;
    while (n!=0)
    {
        n=n/10;
        c++;
    }
    cout<<"The count of positive number is "<<c;
}