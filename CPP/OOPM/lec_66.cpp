#include<iostream>
using namespace std;

// Class Template with Default Parameters
template <class T1 = int, class T2 = float>
class MyClass {
public:
    T1 a;
    T2 b;

    MyClass(T1 x, T2 y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};

int main() {
    // Object 1: No template arguments provided
    MyClass<> obj1(5, 3.2);
    obj1.display();

    cout << endl;

    // Object 2: One template argument provided
    MyClass<char> obj2('A', 98.76);
    obj2.display();

    cout << endl;

    // Object 3: Both template arguments provided
    MyClass<string, double> obj3("Hello", 10.101);
    obj3.display();

    return 0;
}
