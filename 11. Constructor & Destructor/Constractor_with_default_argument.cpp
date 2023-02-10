#include<iostream>
using namespace std;
class Print{
    int data;
    int data1;
    public:
    Print(int a, int b=56){       //Constractor with default argument
        data=a;
        data1=b;
    }
    void printDisply();
};

void Print::printDisply()
{
    cout<<"The value of data and data1 is "<<data<<" and "<<data1<<endl;
}

int main()
{
    Print p(3);
    p.printDisply();
}