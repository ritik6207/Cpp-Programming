#include<iostream>
using namespace std;
int main()
{
    int d;
    cout<<"Enter total days: "<<endl;
    cin>>d;
    int y,m,w;
    y=d/365;
    d=d%365;
    m=d/30;
    d=d%30;
    w=d/7;
    d=d%7;
    cout<<"Year "<<y<<endl;
    cout<<"Month "<<m<<endl;
    cout<<"Week "<<w<<endl;
    cout<<"Days "<<d<<endl;
}