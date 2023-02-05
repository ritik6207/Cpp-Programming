#include<iostream>
using namespace std;
class Y;
class X
{
    int x;
    public:
    void setData(int i)
    {
        x=i;
    }
    friend void max(X,Y);
};

class Y
{
    int y;
    public:
    void setData(int i)
    {
        y=i;
    }
     friend void max(X,Y);
};

void max(X a, Y b)
{
    if(a.x>=b.y)
        cout<<a.x;
    else
        cout<<b.y;
}

int main()
{
    cout<<"Max is "<<endl;
    X m;
    m.setData(12);
    Y n;
    n.setData(14);
    max(m , n);

    return 0;
}