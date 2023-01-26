#include<iostream>
using namespace std;
int main()
{
    int i;
    char s1[100]="Welcome to c++ programming and best of luck";
    char s2[100];
    for (i = 0;s1[i]!='\0'; i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    cout<<"\n s1 = "<<s1;
    cout<<"\n s2 = "<<s2;
}



/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[50],s2[50];
    cout<<"Enter the string: "<<endl;
    gets(s1);
    cout<<"you entered string: "<<s1<<endl;
    strcpy(s2,s1);
    cout<<"copied string is: "<<s2;
}*/