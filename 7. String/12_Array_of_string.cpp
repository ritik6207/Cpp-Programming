#include <iostream>
using namespace std;
int main()
{
    char name[5][20] = {"Ritik", "Ram", "Raja", "Rohit", "Roshan"};
    int i;
    cout << "\n Name are:: \n";
    for (i = 0; i < 5; i++)
    {
        cout << " Name " << i + 1 << " is ::: " << name[i] << endl;
    }
    return 0;
}