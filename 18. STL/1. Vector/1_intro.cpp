#include<iostream>
#include<vector>
using namespace std;
template <class T>
void disply(vector<T> &v)
{
    cout<<"Displying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    // Way to create vector:-
    /*vector<int> vec1;   //Zero length integer vector
    int element,size;
    cout<<"Enter the size of your vecotor "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the Element to add to this vector "<<endl;
        cin>>element;
        vec1.push_back(element);   //in this method u can store the element in vector
    }
    cout<<"You entered element "<<endl;
    disply(vec1);*/
    // vec1.pop_back();  //in this method u can delete last index of element 
    // disply(vec1);

    /*vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+2,6, 50);     //in this iteratro method u can insert any element at any index number and middle 6 work like copy of 50 , 6s times
    disply(vec1);*/

    /*vector<char> vec2(10);   //10 length of character vector
    vec2.push_back('R');
    disply(vec2);*/

    /*vector<char> vec3(vec2);   //10 length of character vector
    disply(vec3)*/

    vector<int> vec4(9,5);   //9 times to print 5 element
    disply(vec4);
    cout<<vec4.size();
  return 0;
}