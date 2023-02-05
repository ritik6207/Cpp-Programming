 #include<iostream>
 using namespace std;
 struct pointer
 {
    int x,y;
 };
 int main()
 {
    pointer p={10,20};
    pointer *ptr = &p;
    cout<<ptr->x<<" ";
    ptr->x=30;
    cout<<p.x<<endl;
    cout<<ptr->y<<" ";
    ptr->y=50;
    cout<<p.y;
    return 0;
 }