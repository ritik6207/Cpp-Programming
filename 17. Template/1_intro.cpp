#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T doctproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(3);
    v1.arr[0] = 4.6;
    v1.arr[1] = 7.7;
    v1.arr[2] = 8.3;
    vector<float> v2(3);
    v2.arr[0] = 1.8;
    v2.arr[1] = 9.5;
    v2.arr[2] = 3.9;
    float a = v1.doctproduct(v2);
    cout <<"The float dotprodut is: "<< a << endl;

    vector<int> v3(3);
    v3.arr[0] = 4.6;
    v3.arr[1] = 7.7;
    v3.arr[2] = 8.3;
    vector<int> v4(3);
    v4.arr[0] = 1.8;
    v4.arr[1] = 9.5;
    v4.arr[2] = 3.9;
    int b = v1.doctproduct(v2);
    cout <<"The integer dotproduct is: "<< b << endl;

    vector<double> v5(3);
    v5.arr[0] = 4.6;
    v5.arr[1] = 7.7;
    v5.arr[2] = 8.3;
    vector<double> v6(3);
    v6.arr[0] = 1.8;
    v6.arr[1] = 9.5;
    v6.arr[2] = 3.9;
    double d = v1.doctproduct(v2);
    cout <<"The Double dotproduct is: "<< d << endl;
    return 0;
}

// Without using tamplate
/*#include <iostream>
using namespace std;
class vector
{
public:
    int *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new int[size];
    }
    int dotProduct(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector v1(3);  //vector 1
    v1.arr[0] = 8;
    v1.arr[1] = 6;
    v1.arr[2] = 8;
    vector v2(3);   //vector 2
    v2.arr[0] = 4;
    v2.arr[1] = 9;
    v2.arr[2] = 2;
    int a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}*/