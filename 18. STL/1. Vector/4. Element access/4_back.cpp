// access last element
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVec;
    myVec.push_back(10);
    while (myVec.back() != 0)
    {
        myVec.push_back(myVec.back() - 1);
    }

    cout << "My vectro contains: ";
    for (unsigned i = 0; i < myVec.size(); i++)
    {
        cout << ' ' << myVec[i];
    }

    cout << endl;
    return 0;
}