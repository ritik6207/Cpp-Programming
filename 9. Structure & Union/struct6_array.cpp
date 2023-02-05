#include <iostream>
using namespace std;
struct array
{
    int x;
    int y;
};
int main()
{
    array arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i].x = i;
        arr[i].y = i * 10;
    }
    for (int i = 0; i < 5; i++)
        cout << arr[i].x << " " << arr[i].y << endl;
}