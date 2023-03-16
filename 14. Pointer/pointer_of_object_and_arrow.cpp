#include <iostream>
using namespace std;
class Complex
{
    float real;
    float img;

public:
    void set_data(float re, float im)
    {
        real = re;
        img = im;
    }
    void get_data(void)
    {
        cout << "Real part of " << real << endl;
        cout << "Imagenery part of " << img << endl;
    }
};

int main()
{
    /*Complex c1;
    Complex *ptr = &c1;*/
    Complex *ptr = new Complex;
    // (*ptr).set_data(4, 5);   same as a
    ptr->set_data(6, 8);
    // (*ptr).get_data(); same as a
    ptr->get_data();

    return 0;
}