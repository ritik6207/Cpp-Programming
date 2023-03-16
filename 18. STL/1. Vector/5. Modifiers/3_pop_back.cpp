#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> Myvec;
    int sum(0);
    Myvec.push_back(124);
    Myvec.push_back(125);
    Myvec.push_back(126);
    Myvec.push_back(127);

    while (!Myvec.empty())
    {
        sum += Myvec.back();
        Myvec.pop_back();
    }

    cout << "The element of myvector add up to " << sum << endl;

    return 0;
}