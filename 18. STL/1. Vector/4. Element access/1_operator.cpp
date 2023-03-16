// Access element
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(10); // 10 zero-initialized elements
    vector<int>::size_type sz = vec.size();
    // assing some values
    for (unsigned i = 0; i < sz; i++)
    {
        vec[i] = i;
    }

    // Reverse vector using operator[]
    for (unsigned i = 0; i < sz / 2; i++)
    {
        int temp;
        temp = vec[sz - 1 - i];
        vec[sz - 1 - i] = vec[i];
        vec[i] = temp;
    }

    cout << "My vector Contains: ";
    for (unsigned i = 0; i < sz; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}