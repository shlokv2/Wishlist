#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    { // constructor
        title = s;
        rating = r;
    }
    virtual void display()
    {
        cout<<"bogus code† "<<endl;
    }
};
class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vL) : CWH(s, r)
    {
        videoLength = vL;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};
class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "no of words of this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for cwh video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    djVideo.display();

    cout<<endl;
    // for cwh test
    title="Django tutorial test";
    words=433;
    rating=4.19;
    CWHtext djtext(title,rating,words);
    djtext.display();
    return 0;

    CWH* tut[2];
    tut[0]=&djVideo;
    tut[1]=&djtext;

    tut[0]->display();
    tut[1]->display();
}
/*
Rules for virtual function
1. They cannot be static
2. They are accesed by object pointer
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used
5. If a virtual is function defined in the base class, there is no necessity for redefining it in the derived class 
*/