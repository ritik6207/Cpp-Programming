#include<iostream>
using namespace std;
int main()
{
    int i,j,a[2][3],b[2][3],c[2][3];
    cout<<"Enter first Matrix elements: "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"Enter second Matrix elements: "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {   
            cin>>b[i][j];
        }
        
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    cout<<"First Matrix is: "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"Second matrix is: "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<b[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"Sum of two Matrix is : "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}