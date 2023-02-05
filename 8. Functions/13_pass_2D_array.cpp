#include<iostream>
#include<iomanip>
using namespace std;
void disply(int a[2][3]);
int main()
{
    int i,j,ar[2][3];
    cout<<"Enter the element of Matrix: "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>ar[i][j];
        }
        
    }
    disply(ar);
}
void disply(int a[2][3])
{
    int i,j;
    cout<<"Matrix is: "<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<setw(5)<<a[i][j];
        }
        cout<<endl;
    }
}