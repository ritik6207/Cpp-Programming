/*#include<iostream>
using namespace std;
int main()
{
    char s[50];
    int i,len;
    cout<<"Enter string: "<<endl;
    gets(s);
    for(i=0;s[i]!='\0';i++);
    len=i;
    cout<<"Length of string:: "<<len;
    return 0;
}*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter the string "<<endl;
    gets(str);
    int len;
    len=strlen(str);
    cout<<"Length of string : "<<len;
}