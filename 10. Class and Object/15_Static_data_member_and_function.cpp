#include <iostream>
using namespace std;
class Stat
{
    int code;
    static int count;

public:
    Stat()
    {
        code=++count;
    }
    void showCode()
    {
        cout << "Code is " << code << endl;
    }
    void showCount()
    {
        cout << "Count is " << count << endl;
    }
};
int Stat::count;
int main()
{
    Stat s1, s2;
    s1.showCount();
    s1.showCode();
    s2.showCount();
    s2.showCode();

    return 0;
}