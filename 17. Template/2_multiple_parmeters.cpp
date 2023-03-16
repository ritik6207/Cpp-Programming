#include<iostream>
using namespace std;

/*
Class templates with multiple parameters (one, tow or more then two)
template <class T1, class T2 ....(comma seprated) >
class nameOfclass
{
    body part
};
*/

template <class T1, class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void disply()
    {
        cout<<"Data one : " <<this->data1<<" , "<<"data two: "<<this->data2<<endl;
    }
};

int main()
{
    myClass<int, float> a(45, 67.2);
    a.disply();
    myClass<char, double> b('R', 67.267);
    b.disply();
    myClass<double, float> c(45.5686, 67.2);
    c.disply();
  return 0;
}