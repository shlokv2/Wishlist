#include <iostream>
using namespace std;
// template for function and not member function(class)
template <typename T>
void display(T a)
{
    cout << "This is " << a << endl;
}
int main()
{
    display('c');
    return 0;
}