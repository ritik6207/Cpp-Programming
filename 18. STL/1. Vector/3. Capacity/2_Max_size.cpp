// Return Maximum size
// Vector :: max_size()
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector;
    for (int i = 0; i < 100; i++)
    {
        myVector.push_back(i);
    }
    cout << "Size: " << myVector.size() << endl;
    cout << "Capacity: " << myVector.capacity() << endl;
    cout << "max_size: " << myVector.max_size() << endl;
    return 0;
}