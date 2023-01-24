#include<iostream>
using namespace std;
int main()
{
    int a,b,i,lcm,hcf,s;
    cout<<"Enter the value of a and b: \n";
    cin>>a>>b;
    if (a>b)
    {
        s=a;
    }
    else{
        s=b;
    }
    for ( i = s; i <=(a*b); i++)
    {
        if ((i%a==0)&&(i%b==0))
        {
            lcm=i;
            break;
        }
        
    }
    cout<<"The LCM of given number is = "<<lcm<<endl;
    hcf=(a*b)/lcm;
    cout<<"The HCF of given number is = "<<hcf<<endl;
    return 0;
}







/*#include<iostream>
using namespace std;
int main()
{
    int a,b,i,lcm,hcf,s;
    cout<<"Enter the value of a and b: \n";
    cin>>a>>b;
    if (a<b)
    {
        s=a;
    }
    else{
        s=b;
    }
    for ( i = 1; i <= s; i++)
    {
        if ((a%i==0)&&(b%i==0))
        {
            hcf=i;
        }
        
    }
    cout<<"The HCF of given number is = "<<hcf<<endl;
    lcm=(a*b)/hcf;
    cout<<"The LCM of given number is = "<<lcm<<endl;
    return 0;
}*/