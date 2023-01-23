#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 2; i++)
    {
        
        cout<<"Hello1"<<endl;
        for (int i = 0; i < i-1; i++)
        {
            cout<<"Hello2"<<endl;
        }
        i = i-1;
    }
    
    return 0;
}
