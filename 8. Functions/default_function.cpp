#include<iostream>
using namespace std;
void printDetails(int id, string name="NA",string address="NA")  
//All default agruments must appear at end otherwise give compiller error
{
    cout<<"Id is "<<id<<"\n";
    cout<<"name is "<<name<<"\n";
    cout<<"address is "<<address<<"\n";
}
int main()
{
    printDetails(101,"Ritik","Bihar");
    cout<<endl;
    printDetails(201,"Ritik");
    cout<<endl;
    printDetails(322);
    return 0;
}