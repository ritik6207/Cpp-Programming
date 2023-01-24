// program to find sum of principle diagonal, other diagonal, upper triangle, lower triangle, all elements of square Matrix
#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int i,j,spd=0,sod=0,sut=0,slt=0,sa=0;
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
           sa=sa+a[i][j];
           if(i==j)
              spd=spd+a[i][j];
            if((i+j) == 2)
              sod=sod+a[i][j];
            if(i<=j)
              sut=sut+a[i][j];
            if(i>=j)
              slt=slt+a[i][j];
        }
        
    }
    cout<<"Enter the elements of Matrix: "<<endl;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n Sum of All elements : "<<sa;
    cout<<"\n Sum of Principle diagonal : "<<spd;
    cout<<"\n Sum of Other diagonal : "<<sod;
    cout<<"\n Sum of Upper Triangle : "<<sut;
    cout<<"\n Sum of Lower Triangle : "<<slt;
    return 0;
}