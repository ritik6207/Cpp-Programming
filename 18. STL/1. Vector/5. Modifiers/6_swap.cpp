// swap content
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> foo(3, 100);
    vector<int> bar(5, 200);
    foo.swap(bar);
    cout<<"foo contains: ";
    for (unsigned i = 0; i < foo.size(); i++)
    {
        cout<<foo[i]<<" ";
    }
    cout<<endl;

    cout<<"bar contains: ";
    for (unsigned i = 0; i < bar.size(); i++)
    {
        cout<<bar[i]<<" ";
    }
    cout<<endl;
   return 0;
}