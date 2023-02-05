#include<iostream>
using namespace std;
struct s3
{
    double d;
    char c1;
    char c2;
}__attribute__((packed));

int main()
{
    cout<<sizeof(s3);
}
