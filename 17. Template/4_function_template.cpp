// Re try code

#include<iostream>
using namespace std;

// float funAverage(int a, int b)
// {
//     float avg = (a+b)/2;
//     return avg;
// }

// int funAverage(int a, int b)
// {
//     int avg = (a+b)/2;
//     return avg;
// }

template <class T>
void swap(T &x, T &y)
{
    T temp = x;
    x = ;
     = temp;
}

template <class T1 , class T2>
float funAverage(T1 a, T2 b)
{
    float avg = (a+b)/2;
    return avg;
}

int main()
{
    float a;
    a = funAverage(5,6.7);
    printf("The average fo these number is %.3f\n",a);
    cout<<endl;
    int x = 6, y = 8;
    // swap(x,y);
    cout<<x<<" "<<y<<endl;
  return 0;
}