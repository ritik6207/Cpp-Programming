#include <bits/stdc++.h>
using namespace std;
int length(char[]);
int main()
{
    int len = 0;
    char str[100];
    cout << "Enter a string: ";
    // cin.getline(str, 100);
    gets(str);
    len = length(str);
    cout << "Length of string is = " << len;
}
int length(char ch[])
{
    int i, l = 0;
    for (i = 0; ch[i] != '\0'; i++)
        l = i;
    return l;
}