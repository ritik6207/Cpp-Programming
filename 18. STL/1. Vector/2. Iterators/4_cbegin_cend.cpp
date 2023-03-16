// Return value  A const_iterator to the begining of the sequence.
// Vector :: cbegin/cend
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> MyVec = {12, 45, 23, 40};
    cout << "contains: ";
    for (auto it = MyVec.cbegin(); it != MyVec.cend(); ++it)
    {
        cout << " " << *it;
    }
    cout << endl;
    return 0;
}