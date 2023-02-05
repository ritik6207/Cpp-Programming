// in this case struct differ in inheritance also. default structure for public , in this case compiles is fine but not give any error.
#include<iostream>
using namespace std;
struct Base
{
    int x;
};
struct Derive: Base{};
int main()
{
    Derive d;
    d.x=20;
    return 0;
}