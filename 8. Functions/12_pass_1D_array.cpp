#include<iostream>
#include<iomanip>
using namespace std;
const int  sz =5;
void disply(int a[sz]);
int main()
{
    int i,ar[sz];
    cout<<"Enter the element of arrry: \n";
    for ( i = 0; i <sz; i++)
    {
        cin>>ar[i];
    }
    disply(ar);
}
void disply(int a[sz])
{
    int i;
    cout<<"You entered the element are:: "<<endl;
    for ( i = 0; i <sz; i++)
    {
        cout<<setw(5)<<a[i]<<endl;
    }
    
}