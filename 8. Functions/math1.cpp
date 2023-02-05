//if u use math library function take a return type must have double type
#include <iostream>
#include <cmath>          //Also use math.h headerbfile in place of cmath
using namespace std;
int main()
{
    double x = 8.3;   
    double l = ceil(x);   //ceil(x) function, take a rounds x to the largest interger value
    cout << l << ' ';
    return 0;
}