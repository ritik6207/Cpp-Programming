#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char st[100];
    ifstream in("text.txt");
    while (in)
    {
        in.getline(st, 100);
        cout << st << endl;
    }
    return 0;
}