#include <iostream>
using namespace std;
/*
Student---->Test               //If you are using a class member in two different class y using Vitual Base class
Student---->Sport
Test---->Result
Sport---->Result
*/
class Student
{
protected:
    int roll_number;

public:
    void set_number(int n)
    {
        roll_number = n;
    }
    void print_number(void)
    {
        cout << "Your roll number is " << roll_number << endl;
    }
};

class Text : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Your marks is here " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sport : virtual public Student
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your Score is " << score << endl;
    }
};

class Result : public Text, public Sport
{
protected:
    float total;

public:
    void disply()
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total Score in Test and Sport are " << total << endl;
    }
};

int main()
{
    Result r;
    r.set_number(91);
    r.set_marks(90.45, 67.45);
    r.set_score(9);
    r.disply();

    return 0;
}