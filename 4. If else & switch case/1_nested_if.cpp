#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the marks: "<<endl;
    cin>>m;
    if (m>=80)
    {
        cout<<"\n Grade = A+ ";
    }
    else
    {
        if (m>=70)
        {
            cout<<"\n Grade = A ";
        }
        else
        {
            if (m>=60)
            {
                cout<<"\n Grade = B ";
            }
            else
            {
                if (m>=40)
                {
                    cout<<"\n Grade = C ";
                }
                else
                {
                    cout<<"\n Grade = F ";
                }
            }
        }
        
    }
    
}