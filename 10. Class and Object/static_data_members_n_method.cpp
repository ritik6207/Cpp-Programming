#include<iostream>
using namespace std;
class Empolyee
{
    int id;
    static int count;    //static data members
    public:
    void setData(void)
    {
        cout<<"Enter the Id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void)
    {
        cout<<"The Id of this empolyee is "<<id<<" and this is empolyee number "<<count<<endl;
    }
    static void getCount(void)     //static method
    {
        // cout<<id;    //static mathod take only static data members not others
        cout<<"the value of count is "<<count<<endl;
    }  
};
// count is the static data members of class Empolyee 
int Empolyee::count; // default count = 0  ,,, you can also intilization count vlaue like this cout=10 etc;
int main()
{
    Empolyee ritik,rohit,satyam;
    ritik.setData();
    ritik.getData();
    Empolyee::getCount();        //static method use without object it is only take class name not object

    rohit.setData();
    rohit.getData();
    Empolyee::getCount();

    satyam.setData();
    satyam.getData();
    Empolyee::getCount();

    return 0;
}