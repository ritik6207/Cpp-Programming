#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float phy;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    phy = m2;
}

void Exam::get_marks()
{
    cout << "The marks obtained in mathes are: " << maths << endl;
    cout << "The marks obtained in Physics are: " << phy << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void disply_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + phy) / 2 << "%" << endl;
    }
};

int main()
{
    /* If we are inheriting B from A and C from B: [A--->B--->C]
      1. A is the base class for B and B is the base class for C
      2. A--->B--->C is called Inheritance Path
    */
    Result rk;
    rk.set_roll_number(91);
    rk.set_marks(96, 71);
    rk.disply_result();

    return 0;
}