#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // Connecting our file with Rout stram
    ofstream rout("_sample.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter you name "<<endl;
    cin>>name;

    // Writing a string to the file
    rout<<name + " is my name ";
    rout.close();

    ifstream rin("_sample.txt");
    string content;
    rin>>content;
    cout<<"The content of the file is: "<<content;
    rin.close();
}