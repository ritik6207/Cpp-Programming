#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    cout<<"\n\n";
    cout<<"Hello World:\n";
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,13);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,1);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,2);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,3);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,4);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,6);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,7);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,8);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,9);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,10);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,11);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,12);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,13);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,14);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,15);
    cout<<"Hello World:\n";
    SetConsoleTextAttribute(h,15);
    cout<<"Hello World:\n";
    return 0;
}