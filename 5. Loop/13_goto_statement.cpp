#include<iostream>
using namespace std;
int main()
{
    int i;
    i=1;
    Nils:
    cout<<" "<<i;
    i++;
    if (i<=10)
    {
        goto Nils;
    }
    
}