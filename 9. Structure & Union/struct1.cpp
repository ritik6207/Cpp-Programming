#include<iostream>
using namespace std;
struct student
{
    int roll_no;
    string name;
    string address;
};
int main()
{
    student s = {111, "Ritik", "Bihar"};
    cout<<s.roll_no<<" "<<s.name<<" "<<s.address;
    return 0;
}