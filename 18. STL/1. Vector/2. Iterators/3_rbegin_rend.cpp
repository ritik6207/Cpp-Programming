// vector rbegin/rend    // reverse element
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> myVec(5); // 5 default constructor ints
   int i = 0;
   vector<int>::reverse_iterator rit = myVec.rbegin();
   for (; rit != myVec.rend(); ++rit)
   {
      *rit = ++i;
   }
   cout << "myVec contains: ";
   for (vector<int>::iterator it = myVec.begin(); it != myVec.end(); it++)
   {
      cout << ' ' << *it;
   }
   cout << "\n";
   return 0;
}