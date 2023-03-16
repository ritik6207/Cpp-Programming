#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    string st;
    // Opening files using constructor an reading it
    ifstream in("_sample.txt");  //Read Operation  //in in() place working like constuctor u can take different different name in in() place like ritik() etc
    // in>>st;  //just like cin //in this case u are able to print only one word but a line
    getline(in,st);   //in this case u are able to print only one line
    cout<<st;
}