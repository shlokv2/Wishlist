#include <iostream>
using namespace std;
// global 
// int hashh[10000000] = {0};  // assuming all numbers are in range [0, 12]

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute frequency
    int hash[1000000] = {0};  // assuming all numbers are in range [0, 12]
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while (q--) {
        int number;
        cout << "Enter the number to find frequency of: ";
        cin >> number;

        // Fetch result
        cout << "Frequency of " << number << " is: " << hash[number] << endl;
    }

    return 0;
}
