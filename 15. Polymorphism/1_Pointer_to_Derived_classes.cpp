#include <iostream>
using namespace std;
class BaseClass
{
public:
    int Var_base;
    void disply()
    {
        cout << "Displying Base class variable var_ base " << Var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void disply()
    {
        cout << "Displying Base class variable var_ base " << Var_base << endl;
        cout << "Displying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_Base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->Var_base = 45;
    // base_class_pointer->var_derived = 67;  //will throw an error
    base_class_pointer->disply();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->Var_base = 799;
    derived_class_pointer->var_derived = 456;
    derived_class_pointer->disply();
    return 0;
}