#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"ENter the year\n";
    cin>>y;
    if (y%100==0)
    {
        if (y%400==0)
        {
            cout<<"It is a Leap Year"<<endl;
        }
        else
        {
            cout<<"It is not Leap Year"<<endl;
        }
    }
    else if (y%4==0)
    {
        cout<<"It is NOt a Leap Year"<<endl;
    }
    else
    {
        cout<<"It is Not a Leap Year"<<endl;
    }
}