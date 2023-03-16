#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("text.txt");
    out<<"C++ programming example \n";
    out<<"Ritik Satyam Suraj\n";
    out<<"I m  a good student \n";
    cout<<"Data writtern in file"<<endl;
    out.close();

    return 0;
} 