#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printDisply()
    {
        cout << "Complex number is " << a << "+" << b << "i" << endl;
    }
};

Complex::Complex(int x, int y) //-->  This is parameterrized constructor as it takes 2 parameters
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    Complex c1(3, 4);
    c1.printDisply();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printDisply();

    return 0;
}

/*#include<iostream>
using namespace std;
class Point{
    int x,y;
    public:
    Point(int a, int b){
        x=a;
        y=b;
    }
    void displyPoint(){
        cout<<"The Point is ("<<x<<" , "<<y<<")"<<endl;
    }
};

int main(){
    Point p(2 ,4);
    p.displyPoint();

    Point t=Point(5,7);
    t.displyPoint();

    return 0;
}*/

// Calculate distace between two ponin cordinate
/*#include<iostream>
#include<math.h>
using namespace std;
class Point2;
class Point{
    int x,y;
    friend void calculatePoint(int , int); 
    public:
    Point(int a,int b){
        x=a;
        y=b;
    }
    void displyPont()
    {
        cout<<"Point is ("<<x<<", "<<y<<")"<<endl;
    }
};

// class Point2{
//     int x1,y1;
//     friend void calculatePoint(Point, Point2);
//     public:
//     Point2(int a1,int b1){
//         x1=a1;
//         y1=b1;
//     }
//     void displyPont()
//     {
//         cout<<"Point is ("<<x1<<", "<<y1<<")"<<endl;
//     }
// };

void calculatePoint(Point a,Point b){
    Point c;
    z=pow((a.x-b.x1),2)
}*/












