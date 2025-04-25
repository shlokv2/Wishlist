#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }

     virtual void display() = 0; // Pure virtual function (do-nothing function)
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
        cout << "Number of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For CWHVideo
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // For CWHtext
    title = "Django tutorial test";
    words = 433;
    rating = 4.19;
    CWHtext djText(title, rating, words);

    // Using base class pointer for polymorphism
    CWH* tutorials[2];
    tutorials[0] = &djVideo;
    tutorials[1] = &djText;

    cout << "--- Using base class pointer ---" << endl;
    tutorials[0]->display();
    cout << endl;
    tutorials[1]->display();

    return 0;
}
