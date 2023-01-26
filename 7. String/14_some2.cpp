// Program to chek whether input character is Capital letters , small letters , digits and special symbols
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char c;
    cout << "Enter a Character : ";
    cin >> c;
    if (isupper(c))
        cout << "\n Character " << c << " is Upper case. ";
    else if (islower(c))
        cout << "\n Character " << c << " is Lower case. ";
    else if (isdigit(c))
        cout << "\n Character " << c << " is Digit. ";
    else
        cout << "\n Character " << c << " is Special Symbol. ";
}