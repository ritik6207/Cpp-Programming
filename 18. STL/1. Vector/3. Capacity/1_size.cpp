// Return size
// vector :: size()
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;
    cout << "0. size: " << vec1.size() << endl;
    for (int i = 0; i < 10; i++)
        vec1.push_back(i);
    cout << "1. size: " << vec1.size() << endl;
    vec1.insert(vec1.end(), 10, 100);
    cout << "2. size: " << vec1.size() << endl;
    vec1.pop_back();
    cout << "3. size: " << vec1.size() << endl;
    return 0;
}