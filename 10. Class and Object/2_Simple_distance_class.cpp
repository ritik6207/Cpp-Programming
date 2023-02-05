#include<iostream>
using namespace std;
class Distance
{
    int feet;
    int inch;
    public:
    void getDist()
    {
        cout<<"Enter the feet "<<endl;
        cin>>feet;
        cout<<"enter the inch "<<endl;
        cin>>inch;
    }
    void show()
    {
        cout<<feet<<" feet "<<inch<<" inch "<<endl;
    }
};

int main()
{
    Distance d1,d2;
    d1.getDist();
    d1.show();

    d2.getDist();
    d2.show();

    return 0;
}