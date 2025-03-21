#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of a:";
    cin>>a;
    //(a > 10) ? cout << "a is greater than 10 " : cout << "a is smaller than 10 ";
    cout<<(a>=0? "Positive  " : "Negative");
    return 0;
}