#include <iostream>
using namespace std;
/*
Systax for initialization list in Constructor:
Constructor (argument-list): initialaztion-section
{
    assigmetn + other code
}

for ex:-

class Test
{
    int a;
    int b;
    public:
    Test(int i,int j):a(i),b(j)
    {
        cout<<"Constructor executed"<<endl;
        cout<<"the value of A is "<<a<<endl;
        cout<<"the value of B is "<<b<<endl;
    }
};
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i,int j):a(i),b(j)
    // Test(int i,int j):a(i),b(i+j)
    // Test(int i,int j):a(i),b(2*+j)
    // Test(int i,int j):a(i),b(a+j)
    // Test(int i,int j):b(j),a(i+b) --> RED Flag this will create problem because A will be initialized first
    // Test(int i,int j):a(i) {in body part b=j}
    Test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Constructor executed" << endl;
        cout << "The value of A is " << a << endl;
        cout << "The value of B is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}