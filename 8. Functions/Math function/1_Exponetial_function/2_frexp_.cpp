/*Syntax
Suppose a floating point number be 'x' and pointer be 'exp':-
float frexp(float x, int* exp);  
double frexp(double x, int* exp);  
long double frexp(long double x, int* exp);  
double frexp(integral x, int* exp);  */
/*Return value
It returns the binary significand which is the absolute value lies between 0.5(included) and 1(excluded).

Parameter	   Significand	      exponent
x=0	             zero   	         zero
x>=1	   positive number        positive number
x>= -1	   negative number	      positive number
-1<x<0	   negative number	      negative number
0<x<1	   positive number	      negative number
*/
/*value of x is greater than 1.

#include <iostream>  
#include<math.h>  
using namespace std;  
int main()  
{  
    double x=2;  
    int* e;  
    cout<<"Value of x is : "<<x<<'\n';  
    double significand = frexp(x,e);  
    std::cout <<x<<"="<<significand<<" * "<<"2^"<<*e;  
    return 0;  
}  */