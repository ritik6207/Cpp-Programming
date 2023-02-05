#include <iostream>
using namespace std;
void repchar(char = '*', int = 20);
int main()
{
    repchar();
    repchar('=');
    repchar('+', 50);
}
void repchar(char ch, int n)
{
    for (int i = 0; i < n; i++)
        cout << ch;
    cout << "\n";
}