/*
Create  2 classes :
    1. SimpleCalculater - Takes input of 2 number uisng a utility function and performs +,-,/,* and displys the results using another function
    2. ScientificCalculter - Takes input of 2 number using a utility function and performs any four scientific operation of your choise and displys the results using another function.

    Create another class HybridCalculater and inherit it using these 2 classes:
    Q1. What type of Inhertance are you uinsg
    Q2. Which mode of Inhertance are using
    Q3. Create an objects of HybridClass and disply results of simple and scientific calculater.
    q4. How is code resulbility implemented?
*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalCulater
{
protected:
    double n1;
    double n2;
    int num;

public:
    void set_n1_n2()
    {
        cout << "Simple Calculator :- " << endl;
        cout << "Enter the value of num1 and num2 " << endl;
        cin >> n1 >> n2;
        cout << endl;
    }

    void Simple_cal()
    {
        cout << "1 for + " << endl;
        cout << "2 for - " << endl;
        cout << "3 for * " << endl;
        cout << "4 for / " << endl;
        cout << "Enter the the operation value [+,-,* and /] " << endl;
        cin >> num;
        cout << endl;
        switch (num)
        {
        case 1:
            cout << "Pluse of two number is " << n1 + n2 << endl
                 << endl;
            break;
        case 2:
            cout << "Subraction of two number is " << n1 - n2 << endl
                 << endl;
            break;
        case 3:
            cout << "Multipication of two number is " << n1 * n2 << endl
                 << endl;
            break;
        case 4:
            cout << "Divided of two number is " << n1 / n2 << endl
                 << endl;
            break;
        default:
            cout << "You entered invilid operation " << endl
                 << endl;
            break;
        }
    }
};

class ScientificCalculater
{
protected:
    double x;
    int num1;

public:
    void set_ValueX()
    {
        cout << "Scientific Calculator :- " << endl;
        cout << "Enter the value of X " << endl;
        cin >> x;
        cout << endl;
    }
    void Scientific_Cal()
    {
        cout << "1 for Trigonemetri " << endl;
        cout << "2 for expon.... " << endl;
        cout << "3 for squre root " << endl;
        cout << "4 for power " << endl;
        cout << "5 for Log " << endl;
        cout << "Enter the value of the operation " << endl;
        cin >> num1;
        cout << endl;
        switch (num1)
        {
        case 1:
            int num2;
            cout << "1 for Sine " << endl;
            cout << "2 for cosine " << endl;
            cout << "3 for Tan " << endl;
            cout << "4 for inverse sin " << endl;
            cout << "5 for invese cos " << endl;
            cout << "6 for invese tan " << endl;
            cout << "Enter Your choise " << endl;
            cin >> num2;
            cout << endl;
            switch (num2)
            {
            case 1:
                cout << "Sin(x) = " << sin(x) << endl
                     << endl;
                break;
            case 2:
                cout << "cos(x) = " << cos(x) << endl
                     << endl;
                break;
            case 3:
                cout << "tan(x) = " << tan(x) << endl
                     << endl;
                break;
            case 4:
                cout << "inverse sin(x) = " << asin(x) << endl
                     << endl;
                break;
            case 5:
                cout << "invese cos(x) = " << acos(x) << endl
                     << endl;
                break;
            case 6:
                cout << "invese tan(x) = " << atan(x) << endl
                     << endl;
                break;
            default:
                cout << "You entered inviled choise " << endl
                     << endl;
                break;
            }
            break;
        case 2:
            cout << "Exepontial = " << exp(x) << endl
                 << endl;
            break;
        case 3:
            cout << "Squre root of x = " << sqrt(x) << endl
                 << endl;
            break;
        case 4:
            cout << "Power of x^2 = " << pow(x, 2) << endl
                 << endl;
            break;
        case 5:
            cout << "Log of x is = " << log(x) << endl
                 << endl;
            break;

        default:
            cout << "You entered inviled Operation " << endl
                 << endl;
            break;
        }
    }
};

class HybridCal : public SimpleCalCulater, public ScientificCalculater
{
public:
    void disply()
    {
        set_n1_n2();
        Simple_cal();
        set_ValueX();
        Scientific_Cal();
    }
};

int main()
{
    HybridCal calc;
    calc.disply();
    return 0;
}