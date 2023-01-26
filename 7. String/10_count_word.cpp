// This program is worng I will chek next time.
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[100];
    int i, j, k, c = 0, w = 1;
    cout << "Enter any senstences: ";
    gets(s);
    i = strlen(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] == ' ') && (s[i - 1] != ' '))
        {
            w++;
        }
        else if (s[i] != '.')
        {
            c++;
        }
    }
    cout << "\n Number of Words ::: " << w;
    cout << "\n Number of characters ::: " << c;
}