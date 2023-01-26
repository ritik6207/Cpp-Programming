#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[50]="Computer",s2[50];
    int ctr=0;
    cout<<"Enter your Password: ";
    cin>>s2;
    ctr=strcmpi(s1,s2);
    if (ctr==0)
    {
        cout<<" Correct Password!! ";
    }
    else
    {
        cout<<" Worng Password!! ";
    }
}
