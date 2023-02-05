#include <iostream>
using namespace std;
void repchar(char , int );
void repchar(char);
void repchar();
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
void repchar(char ch)
{
    for (int i = 0; i < 20; i++)
        cout << ch;
    cout << "\n";
}
void repchar()
{
    for (int i = 0; i < 20; i++)
        cout << '*';
    cout << "\n";
}