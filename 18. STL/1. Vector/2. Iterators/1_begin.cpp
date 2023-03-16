// Return iterrator to begining
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;
    for (int i = 1; i <= 5; i++)
    {
        vec1.push_back(i);
    }
    cout << "vec1 Contais: ";
    for (vector<int>::iterator it = vec1.begin(); it != vec1.end(); ++it)
    {
        cout << " " << *it;
    }
    cout << endl;
    return 0;
}