#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ri = {10, 20, 30};
    ri.emplace_back(100);
    ri.emplace_back(200);

    cout << "My vector contains: ";
    for (auto &x : ri)
        cout << x << " ";
    cout << endl;
    return 0;
}