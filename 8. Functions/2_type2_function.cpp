//NO argument but return type
#include <iostream>
using namespace std;
int sum();
int main()
{
    int result;
    result = sum();
    cout << "Sum of two number is " << result;
}
int sum()
{
    int a, b, sum = 0;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;
    sum = a + b;
    return sum;
}