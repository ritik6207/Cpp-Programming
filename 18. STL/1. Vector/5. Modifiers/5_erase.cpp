// Erase elements
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvec;
    // set some value (from 1 to 10)
    for (int i = 0; i <= 10; i++)
    {
        myvec.push_back(i);
    }

    // erase the first 3 element
    myvec.erase(myvec.begin() + 4, myvec.begin() + 6);
    cout << "My vector contains: ";
    for (unsigned i = 0; i < myvec.size(); ++i)
    {
        cout << myvec[i] << " ";
    }

    cout << endl;
    return 0;
}