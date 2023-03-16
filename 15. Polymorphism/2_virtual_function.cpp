#include <iostream>
using namespace std;
class BaseClass
{
public:
    int Var_base=1;
    virtual void disply()
    {
        cout << "1 Displying Base class variable var_ base " << Var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived=2;
    void disply()
    {
        cout << "2 Displying Base class variable var_ base " << Var_base << endl;
        cout << "2 Displying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_Base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; 
    base_class_pointer->disply();

    return 0;
}