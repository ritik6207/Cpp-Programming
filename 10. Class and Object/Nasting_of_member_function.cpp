// OOPs -- Classes and objects
// c++ --> initially called --> c with classes by stroustroup
// structures has limitation
//   -- member are public
//   -- no method
// classes --> structure + more
// classes --> can have methods and properties
// classses --> can make few member public and few member private
// structure in c++ are typedefed
// You can declare objects along with the class declaration like this:
/* class Employee{
    class definition
} ritik, rohit; */
// ritik.salary = 56 makes no sence if salary is private
// Nasting of member function
#include <iostream>
#include <string>
using namespace std;

class Binnary
{
private:
    string s; // by default take private member if y not decleare any asses modifier
    void chek_bin(void);
public:
    void read(void);
    void ones_complement(void);
    void disply(void);
    void disply1(void);
};

void Binnary::read(void)
{
    cout << "Enter the number " << endl;
    cin >> s;
}

void Binnary::chek_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Increater binnary formate" << endl;
            exit(0);
        }
    }
}

void Binnary::ones_complement(void)
{
    chek_bin();                 //Nasting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binnary::disply(void)
{
    cout << "Displaying your binnary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

void Binnary:: disply1(void)
{
    cout << "Displaying your once compliment" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binnary bin;
    bin.read();
    // bin.chek_bin();   //this method is private so y can not asses in main
    bin.disply();
    bin.ones_complement();
    bin.disply1();
    return 0;
}