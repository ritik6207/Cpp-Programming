// Access first element
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> Myvec;
    Myvec.push_back(56);
    Myvec.push_back(23);
    // now front equal to 23 and bace 56
    Myvec.front() -= Myvec.back();
    cout << "Myvec.front() is now " << Myvec.front() << endl;
    return 0;
}