#include <iostream>
using namespace std;

int main()
{
    // Basic example
    int a = 4;
    int *ptr = &a;
    *ptr = 999;
    cout << "The value of a is " << *ptr << endl;

    // new keyword
    float *p = new float(40.78);
    cout << "The value at address p is " << *p << endl;

    // dynamically allocate array
    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // Correct deallocation of dynamic array
    delete[] arr;

    // Do not access arr after delete — it's undefined behavior.
    // So, remove this:
    // cout << "The value of arr[2] is " << arr[2] << endl;
    // cout << arr[2] << endl;

    return 0;
}
