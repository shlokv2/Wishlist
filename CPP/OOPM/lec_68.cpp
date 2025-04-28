#include <iostream>
using namespace std;

template <class T>
class Shlok
{
public:
    T data;
    Shlok(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Shlok<T>::display()
{
    cout << data;
}
// overloading template function
void func(int a)
{
    cout << "I AM FIRST FUNC( )" << a << endl;
}
template <class T>
void func(T a)
{
    cout << "I AM TEMPLATIZED FUNCTION( )" << a << endl;
}
template <class T>
void func1(T a)
{
    cout << "I AM TEMPLATIZED FUNCTION1( )" << a << endl;
}

int main()
{
    // Shlok<float> s(5.7);
    // Shlok<float> s('c');
    // Shlok<float> s(61);
    // cout << s.data << endl;
    // s.display();
    // func(4); //exact match takes the highest priority
    func1(10);
    return 0;
}