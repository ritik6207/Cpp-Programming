// #include <iostream>
// using namespace std;
// class Soulation
// {
// public:
//     int cppIntType()
//     {
//         int x;
//         cin >> x;
//         return x;
//     }
//     char cppCharType()
//     {
//         char y;
//         cin >> y;
//         return y;
//     }
//     float cppFloatType()
//     {
//         float z;
//         cin >> z;
//         return z;
//     }
// };
// int main()
// {
//     Soulation s, y , d;
//     s.cpuIntType();
//     y.gppCharType();
//     d.hkpfloatType();
//     return 0;
// }
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}

// } Driver Code Ends

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
/*You are required to complete this function*/
void addFraction(int num1, int den1, int num2,int den2)
{
//Your code here
    int nx=num1*den2+num2*den1;
    int dx=den1*den2;

    int gcf=gcd(nx,dx);
    cout<<nx/gcf<<"/"<<dx/gcf<<endl;

 }