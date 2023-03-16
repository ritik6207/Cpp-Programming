#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{23, 67, 89, 12, 78};
    for (auto x : v)
        cout << x << " ";
    return 0;
}