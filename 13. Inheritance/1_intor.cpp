#include<iostream>
using namespace std;
// Base class
class Empolyee
{
    public:
    int id;
    float salary;
    Empolyee(int InId){
        id=InId;
        salary=45.345;
    }
    Empolyee(){}
};

// Derived Class Systax
/*
class {{derived_-class- name}}: {{visibillity-mode}} {{ base-class-name}}
{
    class member/method/etc...
}
Note:-
1. Default visibillity mode is private
2. Public visibillity mode: public member of the base class become Public member  of the derived class
3. Private visibillity mode: public member of the base class become Private member  of the derived class
4. private member are never inherited
*/

// Creating a progrmmer class devived from Empolyee Base class

class Programmer: public Empolyee{
    public:
    int languageCode;
    Programmer(int Inid){
        id=Inid;
        languageCode=9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Empolyee ritik(2), satyam(4);
    cout<<ritik.salary<<endl;
    cout<<satyam.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();

    return 0;
}