#include<iostream>
using namespace std;
int main()
{
    char s1[100]="Welcome to ";
    char s2[100]="C++ programming";
    int i,l;
    for(i=0;s1[i]!='\0';i++);
    l=i;
    for(i=0;s2[i]!='\0';i++)
    {
        s1[l+i]=s2[i];
    }
    s1[l+i]='\0';
    cout<<"Concat string is: "<<s1;
    return 0;
}



/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[60];
    strcpy(name,"Be");
    strcat(name," ");
    strcat(name,"the");
    strcat(name," ");
    strcat(name,"Developer");
    cout<<"\n The string is: "<<name;
}*/