// Add element at the end
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVec;
    int myInt;

    cout << "Please enter some integers (enter 0 to end): " << endl;

    do
    {
        cin >> myInt;
        myVec.push_back(myInt);
    } while (myInt);

    cout << "My vector stores: " << int(myVec.size()) << " number. " << endl;

    return 0;
}