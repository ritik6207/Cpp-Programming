// Constructor Vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Constructor used in the same order as descirbed above
    vector<int> first;                                        //Empty vector of ints
    vector<int> second(4, 100);                               //four ints with value 100
    vector<int> third(second.begin(), second.end());          //intetating through second 
    vector<int> fourth(third);                                 //a copy of third 

    // The iterator constructor can also be used to constructor form array
    int myints[] = {16, 2, 77, 29};
    vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));
    cout << "The contents of fifth are: ";
    for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
    {
        cout << ' ' << *it;
    }
    cout << endl;
    return 0;
}