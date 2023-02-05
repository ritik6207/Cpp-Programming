#include<iostream>
using namespace std;
class B;
class A{
    int a;
    friend void exchange(A &, B &);
    public:
    void getData(int x){
        a=x;
    }
    void showData(){
        cout<<a<<endl;
    }
};
class B{
    int b;
    friend void exchange(A &, B &);
    public:
    void getData(int y){
        b=y;
    }
    void showData(){
        cout<<b<<endl;
    }
};

void exchange(A &o1 , B &o2){
    int temp;
    temp=o1.a;
    o1.a=o2.b;
    o2.b=temp;
}
int main()
{
    A obj1;
    B obj2;
    obj1.getData(12);
    obj2.getData(23);
    exchange(obj1, obj2);
    cout<<"After swping ";
    obj1.showData();
    cout<<"After swping ";
    obj2.showData();
    
    
}