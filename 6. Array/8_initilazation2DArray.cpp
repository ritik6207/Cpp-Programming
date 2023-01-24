#include<iostream>
using namespace std;
int main()
{
    int i,j,a[2][3]={{12,3,6},{12,56,89}};
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