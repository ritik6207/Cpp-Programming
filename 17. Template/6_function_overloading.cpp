#include <iostream>
using namespace std;

void fun(int a)
{
    cout << "I am calling fun()" << a << endl;
}
template <class T>
void fun(T a)
{
    cout << "I am calling templatise function " << a << endl;
}
template <class T>
void fun1(T a)
{
    cout << "I am calling templatise function " << a << endl;
}
int main()
{
    fun(4);  // Exact match takes the hightest priority
    fun1(6); // Exact match takes the hightest priority
    return 0;
}