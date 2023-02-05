#include <iostream>
using namespace std;
class Hero
{
    // propertise
    public:
        int size;
        int weight;
        void print()
    {
        cout << weight << endl;
    }
};

int main()
{
    // creating an object.
    Hero h1;
    h1.size = 12;
    h1.weight = 70;
    cout << "size is " << h1.size << " Weight is " << h1.weight;
    return 0;
}