#include<iostream>
#include<list>
using namespace std;


void disply(list<int> &lis)
{
    list<int> :: iterator it;
    for (it = lis.begin(); it!= lis.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1;   //List of 0 length
    list1.push_back(4);
    list1.push_back(8);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(2);
    disply(list1);
         
    // Removing element from the list
    // list1.pop_back();  //in this method u can delete the last element of the array
    // list1.pop_front();    //in this method u can delete the first element of the array
    // list1.remove(1);       //In this method u can delete any element of the array

    // Shorting the list
    /*list1.sort();  //in this method u can sorting the element
    disply(list1);*/

    // Revesing the element
    /*list1.reverse();
    disply(list1);*/

    list<int> list2(5);  //Empty list of size 5
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 67;
    iter++;
    *iter = 6;
    iter++;
    *iter = 7;
    iter++;
    *iter = 8;
    iter++;
    *iter = 3;
    iter++;
    disply(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging ";
    disply(list1);
   return 0;
}