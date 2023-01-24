#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter the character:: ";
    cin>>c;
    if (c>=65&&c<=90)
    {
        cout<<"\n Character "<< c <<" is in Upper case";
    }
    else if (c>=97&&c<=122)
    {
        cout<<"\n Character "<< c <<" is in Lower case.";
    }
    else if (c>=48&&c<=57)
    {
        cout<<"\n Character "<< c <<" is in Digit case.";
    }
    else
    {
        cout<<"\n Character "<< c <<" is in Symbols case.";
    }
    return 0;
}