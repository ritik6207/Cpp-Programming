#include <iostream>
using namespace std;
int main()
{
    char s[100];
    int vctr = 0, cctr = 0;
    cout << "Enter a string: " << endl;
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        switch (s[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vctr++;
            break;
        default:
            cctr++;
            break;
        }
    }
    cout << "\n The Number of vowles: = " << vctr;
    cout << "\n The Number of constant: = " << cctr;
    cout << endl;
    return 0;
}