#include<iostream>
using namespace std;

template <class T>
class Ritik
{
    public:
    T data;
    Ritik(T a)
    {
        data = a;
    }
    void disply();
};

template <class T>
void Ritik<T>::disply()
{
    cout<<data;
}
int main()
{
    // Ritik<int> r(45);
    // Ritik<float> r(45.56);
    Ritik<char> r('R');
    // cout<<r.data<<endl;
    r.disply();
  return 0;
}