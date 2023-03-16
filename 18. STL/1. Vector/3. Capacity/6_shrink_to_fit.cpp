// shrink to fit
// vectro :: shrink_to_fit
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec(100);
    cout<<"1. capacity of vec: "<<vec.capacity()<<endl;
    vec.resize(10);
    cout<<"2. Capacity of vec: "<<vec.capacity()<<endl;
    vec.shrink_to_fit();
    cout<<"3. capacity of vec: "<<vec.capacity()<<endl;
   return 0;
}