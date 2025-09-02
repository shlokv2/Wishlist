#include <iostream>
using namespace std;
// Sum of first N numbers using recursion
void parametrisedWay(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    parametrisedWay(i - 1, sum + i);
}
int functionalWay(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + functionalWay(n - 1);
}
void factPW(int i, int fact)
{
    if (i < 1)
    {
        cout << fact << endl;
        return;
    }
    factPW(i - 1, fact * i);
}
int factFW(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factFW(n - 1);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    parametrisedWay(n, 0);
    cout << functionalWay(n) << endl;
    factPW(n, 1);
    cout << factFW(n) << endl;
    return 0;
}