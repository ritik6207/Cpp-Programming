#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("_sample.txt");
    out << "I m Ritik \n";
    out << "I m basically form Bihar\n";
    out << "I currently living in Bhopal";
    out.close();

    ifstream in;
    in.open("_sample.txt");
    string st;
    // in>>st;
    // cout<<st;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();

    return 0;
}