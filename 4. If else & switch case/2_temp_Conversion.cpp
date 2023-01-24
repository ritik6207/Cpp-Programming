#include<iostream>
using namespace std;
int main()
{
    int c;
    cout<<"Temp. conversion menu: ";
    cout<<"\n 1. farenhit to celsius.";
    cout<<"\n 2. celsius to farenhit. ";
    cout<<"\n Enter your choice: ";
    cin>>c;
    if (c==1)
    {
        float temp,cnv;
        cout<<"Enter Temp. in farenhit: ";
        cin>>temp;
        cnv=(temp-32)/1.8;
        cout<<"\n The temp in celsius is = "<<cnv;
    }
    else
    {
        float temp,cnv;
        cout<<"Enter Temp. in celsius: ";
        cin>>temp;
        cnv=(1.8*temp)+32;
        cout<<"\n The temp in farenhit is = "<<cnv;
    }
}
