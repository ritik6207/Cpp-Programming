#include <iostream>
using namespace std;
class Company
{
    int id;
    int salary;

public:
    void setId(void)
    {
        cout << "Enter the id of empolyee is " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "Empolyee Id number is " << id << endl;
    }
    void setSalary(void)
    {
        cout << "Enter the salary of empolyee is " << endl;
        cin >> salary;
    }
    void getSalary(void)
    {
        cout << "Empolyee salary is " << salary << endl;
    }
};

int main()
{
    Company fb[5];    //array of object
    for (int i = 0; i < 5; i++)
    {
        fb->setId();
        fb->getId();
        fb->setSalary();
        fb->getSalary();
    }
    return 0;
}