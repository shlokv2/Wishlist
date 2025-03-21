#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of a for is " << a << endl;
        cout << "The value of b for is " << b << endl;
        cout << "The value of c for is " << c << endl;
        cout << "The value of d for is " << d << endl;
        cout << "The value of e for is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1, 2, 4);
    harry.getData();

    Employee shlok;
    shlok.d = 12;
    shlok.e = 10;
    shlok.setData(20, 30, 40);
    shlok.getData();
    return 0;
}
