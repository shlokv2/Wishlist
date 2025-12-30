#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool arrIsSorted(vector<int> &arr) {
    int n = arr.size();
    
    // Start from 1 to compare each element with its previous
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;  // Not sorted in non-decreasing order
        }
    }
    return true;  // Sorted
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arrx(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arrx[i];
    }

    bool result = arrIsSorted(arrx);
    if (result)
        cout << "Array is sorted." << endl;
    else
        cout << "Array is not sorted." << endl;

    return 0;
}
