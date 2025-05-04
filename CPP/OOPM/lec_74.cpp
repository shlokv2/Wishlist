#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    // Function Objects(Functor): Function wrapped in a class so that it is available like an object ()
    int arr[] = {1, 73, 4, 2, 54, 16};
    sort(arr, arr + 5);
    // sort(arr,arr+6, greater<int>()); // Sorts in descending order
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
        ;
    }

    return 0;
}