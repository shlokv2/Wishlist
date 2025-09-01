#include <iostream>
using namespace std;
void printName(int i, int n)
{

    if (i > 3)
    {
        return;
    }
    cout << "Shlok" << endl;
    printName(i + 1, n);
}

void printLinear(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    printLinear(i + 1, n);
}
void printRevLinear(int i, int n)
{
    // if(i>n) return;
    // cout<<n<<endl;
    // printRevLinear(i,n-1); this approach is correct however it modifies the original value n instead of i

    if (i < n)
        return;

    cout << i << endl;
    printRevLinear(i - 1, n);
}
void printLinearBT(int i, int n)
{
    if (i < 1)
        return;
    printLinearBT(i - 1, n);
    cout << i << endl;
}
void printRevLinearBT(int i, int n)
{
    if (i > n)
        return;
    printRevLinearBT(i + 1, n);
    cout << i << endl;
}
int main()
{
    int n;
    int i = 1;
    cout << "Enter n" << endl;
    cin >> n;
    cout << "Print name" << endl;
    printName(i, n);
    cout << "Print 1 to n" << endl;
    printLinear(i, n);
    cout << "Print n to 1" << endl;
    printRevLinear(n, n);
    cout << "Print 1 to n by backtracking" << endl;
    printLinearBT(n, n);
    cout << "Print n to 1 by backtracking" << endl;
    printRevLinearBT(1, n);
    return 0;
}