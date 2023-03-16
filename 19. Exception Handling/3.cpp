#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Tasting any exception\n";
        throw 'R';   // char , int , float , double etc...
    }
    catch (...)     //in this catch method u can assece the any primitive data type of value in the throw keyword like int , float , char and double etc...
    {
        cout << "catched the thrown value";
    }
    return 0;
}