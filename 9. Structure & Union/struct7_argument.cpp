#include <iostream>
using namespace std;
struct argument
{
    int x;
    int y;
};
void print(argument ar)
{
    cout << ar.x << " " << ar.y << endl;
}
int main()
{
    argument ar = {29, 45};
    print(ar);
    return 0;
}