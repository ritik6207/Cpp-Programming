#include <iostream>
using namespace std;
class A
{
private:
    char name;

public:
    int age;
    /*void print()
    {
        cout<<age<<endl;
    }*/
    char getChar()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    char setChar(char ch) 
    {
        name = ch;
    }
    int setAge(int a)
    {
        age = a;
    }
}; // if you are making class in c++ , you must use semicolon(;) end of the class

int main()
{
    A obj;
    obj.setAge(21);
    cout << "Ritik age is " << obj.getAge() << endl;  //use getter
    obj.setChar('A');
    cout<<obj.getChar()<<endl;
}