#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Create a map to store frequency of each element
    map<int, int> freq;

    // Step 2: Precompute frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Step 3: Find element with the highest frequency
    int maxFreq = 0;
    int element = -1;

    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            element = it.first;
        }
    }

    // Step 4: Display result
    cout << "\nElement with the highest frequency: " << element << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}
