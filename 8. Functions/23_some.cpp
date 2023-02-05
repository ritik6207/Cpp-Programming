// program to Merge Two array using functions
#include <iostream>
using namespace std;
void Merge(int[], int, int[], int, int[]);
int main()
{
    int A[50], B[50], C[100], MN = 0, M, N;
    cout << "\n Enter number of elements in first Array: ";
    cin >> M;
    cout << "\n Enter First Array elements [ASCENDING] :: ";
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }
    cout << "\n Enter number of elements in second Array: ";
    cin >> N;
    cout << "\n Enter second Array elements [ASCENDING] :: ";
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    MN = M + N;
    Merge(A, M, B, N, C);
    cout << "\n The sorted Array after Merging is = \n";
    for (int i = 0; i < MN; i++)
    {
        cout << C[i] << "  ";
    }
}
void Merge(int A[], int M, int B[], int N, int C[])
{
    int a, b, c;
    for (a = 0, b = 0, c = 0; a < M && b < N;)
    {
        if (A[a] < B[b])
            C[c++] = A[a++];
        else
            C[c++] = B[b++];
    }
    if (a < M)
    {
        while (a < M)
        {
            C[c++] = A[a++];
        }
    }
    else
    {
        while (b < N)
        {
            C[c++] = B[b++];
        }
    }
}