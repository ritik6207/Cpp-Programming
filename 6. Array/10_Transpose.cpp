#include<iostream>
using namespace std;
#define N 50
int main()
{
    int i,j,a[N][N],m,n;
    cout<<"Enter the row and colum of Matrix: "<<endl;
    cin>>m>>n;
    cout<<"Enter elements of Matrix: "<<endl;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"Matrix is: "<<endl;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Transpose Matrix is: "<<endl;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<a[j][i]<<"\t";
        }
        cout<<endl;
    }
}