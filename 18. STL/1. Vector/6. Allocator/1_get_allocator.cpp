#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVec;
    int *p;
    unsigned int i;
    // allocate an array with space for 5 element using vector's allocator:
    p = myVec.get_allocator().allocate(5);

    // construct value in palce on the array:
    for (int i = 0; i < 5; i++)
    {
        myVec.get_allocator().construct(&p[i], i);
    }
    cout << "the allocated array contains: ";
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    // destroy and deallocate:
    /*for (int i = 0; i < 5; i++)
    {
        myVec.get_allocator().destroy(&p[i]);
        myVec.get_allocator().deallocate(p, 5);
    }*/

    return 0;
}