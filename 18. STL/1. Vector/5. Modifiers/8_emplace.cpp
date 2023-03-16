// Construct and insert element
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> MyVec = {10, 20, 30};

    auto it = MyVec.emplace(MyVec.begin() + 1, 100);
    MyVec.emplace(it, 200);
    MyVec.emplace(MyVec.end(), 300);

    cout << "My vector contains: ";
    for (auto x : MyVec)
        cout << x << " ";
    cout << endl;
    return 0;
}