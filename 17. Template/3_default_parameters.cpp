#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class myWork
{
public:
    T1 a;
    T2 b;
    T3 c;
    myWork(T1 a, T2 b, T3 c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void disply()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    myWork<> m(34, 67.34, 'R'); // input take default template
    m.disply();
    cout << endl;
    myWork<char, int, double> y('S', 67, 34564.345);
    y.disply();
    cout << endl;
    myWork<int, double, int> k(34, 567.87, 91);
    k.disply();
    return 0;
}