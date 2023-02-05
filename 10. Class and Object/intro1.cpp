#include <iostream>
using namespace std;
class Emp
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);   //Decleration
    void getData()
    {
        cout << "The vlaue of a is " << a << endl;
        cout << "The vlaue of b is " << b << endl;
        cout << "The vlaue of c is " << c << endl;
        cout << "The vlaue of d is " << d << endl;
        cout << "The vlaue of e is " << e << endl;
    }
};
void Emp::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Emp obj;
    // obj.a=132;  throw error as a private
    obj.d = 34;
    obj.e = 67;
    obj.setData(2, 3, 5);
    obj.getData();
}