#include <iostream>
#include <fstream>
/*
The useful classes for working with files in c++ are:
1. fstream
2. ifstream --> derived from fstreambase
2. ofstream --> derived from fstreambase

In order to wrok with files in C++, you will have to open it. primarily, there are two ways to open a file
1. Using the constructor
2. Using the member function open() of the class
*/

using namespace std;

int main()
{
    // opening files using constructor and writing it
    string st = "Shlok Khandelwal";
    ofstream out1("sample60.txt"); // Write operation
    out1 << st;

    // opening files using constructor and reading it
    string st2;
    ifstream in("sample60b.txt");
    // in >> st2;
    getline(in,st2);
    getline(in,st2);
    cout<<st2<<endl;
    return 0;
}