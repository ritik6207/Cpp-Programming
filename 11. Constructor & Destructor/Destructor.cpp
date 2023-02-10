#include <iostream>
using namespace std;
// Destructor never take an argument nor does it return any value
int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~Num()
    {
        cout << "this is the time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first  object n1" << endl;
    Num n1;
    {
        cout << "Entering this block " << endl;
        cout << "creating two more objects " << endl;
        Num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main " << endl;
    return 0;
}