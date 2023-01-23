#include<iostream>
using namespace std;
class student
{
public:
    int age;
    int rollno;
    void disply()
    {
        cout<<"age "<<age<<" rollno "<<rollno<<endl;
    }
};

int main()
{
    student s1,s2;
    /*s1.age=23;
    s1.rollno=123;
    s1.disply();
    s2.age=27;
    s2.rollno=128;
    s2.disply();*/
    cout<<"Eneter the value of age and rollno\n";
    cin>>s1.age>>s1.rollno;
    s1.disply();
}