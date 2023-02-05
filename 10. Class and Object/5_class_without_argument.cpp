#include<iostream>
using namespace std;
class Max
{
    int a;
    int b;
    public:
    void getValue()
    {
        cout<<"Enter the vlue of A"<<endl;
        cin>>a;
        cout<<"Enter the vlue  of B"<<endl;
        cin>>b;
    }
    void chekMax()
    {
        if(a>b)
        {
            cout<<"A is Max";
        }
        else
        {
            cout<<"B is Max";
        }
    }
};

int main()
{
    Max m;
    m.getValue();
    m.chekMax();

    return 0;
}