#include <iostream>
using namespace std;
int main()
{
    char s1[50];
    int i, j, l;
    cout << "Enter a string: ";
    cin.getline(s1, 40);
    for (l = 0; s1[l] != '\0'; l++);
    int flage = 1;
    for (i = 0, j = l - 1; i < l / 2; i++, j--)
    {
        if (s1[i] != s1[j])
        {
            flage = 0;
            break;
        }
    }
    if (flage)
    {
        cout << "\n It is palindrome:"; // if reverse word is same it is called palindrome
    }
    else
    {
        cout << "\n It is not palindrome:";
    }
}