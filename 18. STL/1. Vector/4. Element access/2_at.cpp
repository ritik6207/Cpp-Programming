// Vectro :: at
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVec(10); // 10 zero- initialized ints
    // assing some values:
    for (unsigned i = 0; i < myVec.size(); i++)
    {
        myVec.at(i) = i;
    }
    cout << " My vector contains: ";
    for (unsigned i = 0; i < myVec.size(); i++)
    {
        cout << ' ' << myVec.at(i);
    }
    cout << endl;
    return 0;
}