#include<iostream>
using namespace std;
int main()
{
    int i,j,a[2][3];
    cout<<"Enter the elements of 2D array: "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"2D array or Matrix is =: "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}