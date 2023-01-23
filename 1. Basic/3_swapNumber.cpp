// without using 3rd variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two number:\n";
    cin>>a>>b;
    cout<<"Before swap\n";
    cout<<"A :"<<a<<"\n"<<"B :"<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swap\n";
    cout<<"A :"<<a<<"\n"<<"B :"<<b<<endl;
}

// using 3rd variable
/*#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two number:\n";
    cin>>a>>b;
    cout<<"Befor swap\n";
    cout<<"A: "<<a<<"\n"<<"B: "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After swap\n";
    cout<<"A: "<<a<<"\n"<<"B: "<<b<<endl;
    return 0;
}*/