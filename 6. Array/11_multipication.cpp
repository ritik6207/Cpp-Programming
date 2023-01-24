#include<iostream>
using namespace std;
#define N 50
int main()
{
    int i,j,k,a[N][N],b[N][N],c[N][N],m,n,p,q,sum=0;
    cout<<"Enter the row and coulum of first matrix: "<<endl;
    cin>>m>>n;
    cout<<"Enter the elements of first Matrix: "<<endl;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"Enter the row and coulum of second matrix: "<<endl;
    cin>>p>>q;
    cout<<"Enter the elements of second Matrix: "<<endl;
    for ( i = 0; i < p; i++)
    {
        for ( j = 0; j < q; j++)
        {
            cin>>b[i][j];
        }
        
    }
    cout<<"First Matrix is: "<<endl;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Second Matrix is: "<<endl;
    for ( i = 0; i < p; i++)
    {
        for ( j = 0; j < q; j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    if (n!=p)
    {
        cout<<"You are not able to find out the multipication of Matrix: "<<endl;
    }
    else
    {
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < q; j++)
            {
                for ( k = 0; k < m; k++)
                {
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                }
                
            }
            
        }
        cout<<"Multipication Matrix is: "<<endl;
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < q; j++)
            {
                cout<<c[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    return 0;
}