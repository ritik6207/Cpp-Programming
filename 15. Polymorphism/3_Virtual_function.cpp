/*
Rule for virtual function:-
    1. They cannot be static
    2. They ar accessed by object pointers
    3. Virtual function can be a friend of another class
    4. A virtual function in base class might not be used
    5. If a virtual function is defined in a base class , there is no neccessity of redefining it in the Derived class

*/

#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;
    public:
    CWH(string title, float rating)
    {
        this->title = title;
        this->rating = rating;
    }
    virtual void disply() {}
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string title, float rating, float videoLength) : CWH(title, rating)
    {
        this->videoLength = videoLength;
    }
    void disply()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Rating : " << rating << "out of 5 star " << endl;
        cout << "Length of this video is : " << videoLength << " min " << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string title, float rating, int words) : CWH(title, rating)
    {
        this->words = words;
    }
    void disply()
    {
        cout << "This is an amazing Text with title " << title << endl;
        cout << "Rating : " << rating << "out of 5 star " << endl;
        cout << "Length of this words is : " << words << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for video
    title = "Django tutorial ";
    vlen = 4.56;
    rating = 4.87;
    CWHVideo Djvideo(title, rating, vlen);
    // Djvideo.disply();

    // for Text
    title = "Django Test ";
    words = 456;
    rating= 4.12;
    CWHText djtest(title,rating,words);
    // djtest.disply();

    // taking pointer
    CWH * tuts[2];
    tuts[0] = &Djvideo;
    tuts[1] = &djtest;

    tuts[0]->disply();
    tuts[1]->disply();

    return 0;
}