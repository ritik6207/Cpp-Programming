// When derive class is protected and base class member aslo protected
#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};

// for a protected member
/*
                            Public derivation        Private derivation      Protected derivation
    1. Privarte member       Not Inherited            Not inherited              Not inherited
    2. Protected member       Protected                 Private                    portected
    3. Public member            public                  private                     portected

*/

class Derive : private Base
{
};

int main()
{
    Base b;
    Derive d;
    // cout<<d.a;      //Will not work since a is protected in both base as well as derived class
    return 0;
}