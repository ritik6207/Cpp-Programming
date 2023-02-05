#include<iostream>
#include<string.h>
using namespace std;
class Stringfun
{
    char name[100];
    public:
    void concatString(char a[] , char b[])
    {
        strcat(a,b);
        strcpy(name, a);
    }
    void disply()
    {
        cout<<"\n Name "<<name<<endl;
    }
};

int main()
{
    char s1[100],s2[100];
    Stringfun s;
    cout<<"Enter the String s1"<<endl;
    gets(s1);
    cout<<"Enter teh String s2"<<endl;
    gets(s2);
    s.concatString(s1,s2);
    s.disply();
    return 0;

}