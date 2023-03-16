// Return size of allocated storage capacity
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    // set some content in vector:
    for (int i = 0; i < 100; i++)
    {
        vec.push_back(i);
    }
    cout << "Size: " << (int)vec.size() << endl;
    cout << "Capacity: " << (int)vec.capacity() << endl;
    cout << "max_size: " << (int)vec.max_size() << endl;
    return 0;
}