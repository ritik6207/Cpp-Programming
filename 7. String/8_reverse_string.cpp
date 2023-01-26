#include <iostream>
using namespace std;
int main()
{
    int i, j, l;
    char s1[25], s2[25];
    cout << "Enter any string: ";
    gets(s1);
    for (i = 0; s1[i] != '\0'; i++);
    l = i;
    for (i = 0, j = l - 1; j >= 0; j--, i++)
    {
        s2[i] = s1[j];
    }
    s2[i] = '\0';
    puts(s2);
    return 0;
}