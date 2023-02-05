#include<iostream>
using namespace std;
struct  Rectangle       //structure is user define keyword
{
    int width;          //these are structure members
    int height;
};                      //not forget semicolon in structure (;)
int main()
{
    /*struct*/ Rectangle rec;      //in C++ struct is a optional but not C    //rec is variable of structure
    rec.width=12;                   //initilization of structure using doubt(.) operater , with structure variable and structure members
    rec.height=10;
    cout<<"Area of rectangle is "<<(rec.width*rec.height)<<endl;
}