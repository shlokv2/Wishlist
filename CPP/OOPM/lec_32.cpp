#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public: // Constructor must be public to allow object creation in main
    Simple(int a, int b = 6, int c = 9)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData(); // Declaration remains unchanged
};

void Simple::printData()
{
    cout << "The value of data is " << data1 << " and " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s(1,13);   // Fixed: constructor requires two arguments
    s.printData(); // Works because printData is public
    return 0;
}
