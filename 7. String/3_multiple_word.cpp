#include<iostream>
using namespace std;
#define max 50
int main()
{
    char str[max];
    cout<<"Enter a string : "<<endl;
    cin.get(str,max);
    cout<<"You entered string: "<<str;
    return 0;
}