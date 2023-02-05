// some important point of inline function
/*
1. inline is just a suggestion t complier
2. Modern compilers may make a function inline even if we do not use inline
3. using inline too much may increse the binary file size
4. When we define a method inside a class , it es automatically treated as inline suggestion to the compiler*/
#include <iostream>
using namespace std;
inline int getMax(int x, int y)
{
    return (x > y) ? x : y;
}
int main()
{
    cout << getMax(10, 20);
    return 0;
}