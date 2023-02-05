#include<iostream>
using namespace std;
class Member
{
    public:
    void inside()
    {
        cout<<"This is inside of mumber function"<<endl;
    }
    void outside();
};

void Member::outside()
{
    cout<<"This is outside of mumber function"<<endl;
}

int main()
{
    Member m;
    m.inside();
    m.outside();

    return 0;
}