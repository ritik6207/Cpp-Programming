#include <iostream>
using namespace std;

class code
{
    int id;

public:
    code() {} // Constructor
    code(int a)
    { // Constructor again
        id = a;
    }
    code(code &x)
    { // Copy constructor
        id = x.id;
    }
    void disply()
    {
        cout << id;
    }
};

int main()
{
    code A(100); // Object A is created and initilization
    code B(A);   // Copy constructor is called
    code C = A;  // Copy constructor call again

    code D; // D is created , not initialized
    D = A;

    cout << "\n Id of A ";
    A.disply();
    cout << "\n Id of B ";
    B.disply();
    cout << "\n Id of C ";
    C.disply();
    cout << "\n Id of D ";
    D.disply();

    return 0;
}