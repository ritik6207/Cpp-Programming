// Change size
// Vector :: resize()
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> my;
    // set some initial content
    for (int i = 1; i < 10; i++)
    {
        my.push_back(i);
    }
    
    my.resize(5);
    my.resize(8, 100);
    my.resize(12);

    for (int i = 0; i < my.size(); i++)
    {
        cout<<' '<<my[i];
    }
    cout<<endl;

   return 0;
}