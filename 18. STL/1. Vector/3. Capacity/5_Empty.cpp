// Test whether vector is empty
// vector :: empty
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> it;
    int sum(0);
    for (int i = 1; i <= 10; i++)
    {
        it.push_back(i);
    }

    while (!it.empty())
    {
        sum += it.back();
        it.pop_back();
    }

    cout << "Total: " << sum << endl;
    return 0;
}