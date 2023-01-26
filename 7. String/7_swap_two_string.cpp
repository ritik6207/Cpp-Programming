#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main()
{
    char s1[20], s2[20], s3[20];
    cout << "Enter two string:: " << endl;
    cin >> s1 >> s2;
    cout << "Before swaping any string: " << endl;
    cout << "1." << s1 << setw(10) << "2." << s2 << endl;
    strcpy(s3, s1);
    strcpy(s1, s2);
    strcpy(s2, s3);
    cout << "After swaping string: " << endl;
    cout << "1." << s1 << setw(10) << "2." << s2 << endl;
    return 0;
}