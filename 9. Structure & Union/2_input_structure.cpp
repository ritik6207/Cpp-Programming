#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
    string name;
    string rollNo;
    int marks;
};

int main()
{
    student s1;
    cout<<"Enter the name\n";
    cin>>s1.name;
    cout<<"Enter the roll number\n";
    cin>>s1.rollNo;
    cout<<"Enter the marks\n";
    cin>>s1.marks;
    cout<<"Information of student is "<<endl;
    cout<<setw(5)<<s1.name<<" "<<s1.rollNo<<" "<<s1.marks<<endl;
    return 0;
}
