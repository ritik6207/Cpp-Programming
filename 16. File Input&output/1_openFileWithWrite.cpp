#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string st = "Ritik kumar";
    // Opening files using constructor and writing it
    ofstream out("_sample.txt"); //write operation //in out() place working like constuctor u can take different different name in out() place like ritik() etc
    out<<st;  //just like cout
}