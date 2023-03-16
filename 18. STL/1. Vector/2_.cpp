#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(45);
    v.push_back(12);
    v.push_back(67);
    for (auto x : v)
        cout << x << " ";
    return 0;
}