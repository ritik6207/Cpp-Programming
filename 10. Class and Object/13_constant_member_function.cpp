#include<iostream>
using namespace std;
class Const
{
    int x;
    public:
    void getX()
    {
        cout<<"Enter the number"<<endl;
        cin>>x;
    }
    void show() const
    {
        // x=x*2;    //can not change be data member.
        cout<<"x= "<<x<<endl;
    }
};

int main()
{
    Const c;
    c.getX();
    c.show();

    return 0;
}