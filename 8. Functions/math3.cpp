//Absolute value of x.
/*if x>0 then abs(x) is x
if x=0 then abs(x) is 0.0
if x<0 then abs(x) is -x 
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x = -12, y;
    y = fabs(x);
    cout << y;
    return 0;
}