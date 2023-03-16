// Return const_iterator to revese beginning and end
// Vectro :: crbeing/crend
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7};
    cout << "vec1 beckword: ";
    for (auto rit = vec1.crbegin(); rit != vec1.crend(); ++rit)
    {
        cout << ' ' << *rit;
    }
    cout << endl;
    return 0;
}