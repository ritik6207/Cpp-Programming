// Re chek program because this progra is wrong.
#include<iostream>
#include<iomanip>
using namespace std;
struct Address
{
    string name;
    string village;
};

int main()
{
    Address a,b;
    Address c={"Ritik","Bihar"};
    cout<<"Enter the name\n";
    cin>>a.name;
    cout<<"Enter the Address\n";
    cin>>a.village;
    b.name=a.name+c.name;
    b.village=a.village+c.village;

}