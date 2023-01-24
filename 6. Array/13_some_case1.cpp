// program to find row-wise sum and coloumn-wise sum and sum of all elements of Matrix: 
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a[3][3];
    int i,j,gt=0;
    int rs[3]={0},cs[3]={0};
    cout<<"Enter the elements of Matrix: "<<endl;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            rs[i]=rs[i]+a[i][j];
            cs[j]=cs[j]+a[i][j];
            gt=gt+a[i][j];
        }
        
    }
    cout<<"Matrix is : "<<endl;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<< setw(4) <<a[i][j];
        }
        cout<<" | "<<rs[i]<<endl;
    }
    cout<<"_________________ \n";
    for ( i = 0; i < 3; i++)
    {
        cout<<setw(4)<<cs[i];
    }
    cout<<" | "<<gt;
}