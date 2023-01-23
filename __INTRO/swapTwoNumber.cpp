#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"\n a = "<<a<<", b = "<<b;
    c=a;
    a=b;
    b=c;
    cout<<"\n a = "<<a<<", b = "<<b;
}