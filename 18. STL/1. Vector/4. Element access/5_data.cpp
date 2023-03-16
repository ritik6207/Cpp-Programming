// vectro :: data
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVec(5);
    int *p = myVec.data();
    *p = 10;
    ++p;
    *p = 20;
    p[2] = 100;
    cout << "My vector contains: ";
    for (unsigned i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
    cout << endl;
    return 0;
}