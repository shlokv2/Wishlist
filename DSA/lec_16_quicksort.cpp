#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Partition function — rearranges elements around the pivot
int partitionfn(vector<int> &arr, int low, int high) {
    int pivot = arr[low];          // Choose the first element as pivot
    int i = low;                   // Left pointer
    int j = high;                  // Right pointer

    while (i < j) {
        // Move i forward until we find element > pivot
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        // Move j backward until we find element <= pivot
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        // Swap out-of-place elements
        if (i < j)
            swap(arr[i], arr[j]);
    }

    // Place pivot element in its correct position
    swap(arr[low], arr[j]);
    return j;  // Return index of pivot (partition point)
}

// Recursive quick sort
void quick_sort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int partitionIndex = partitionfn(arr, low, high);
        quick_sort(arr, low, partitionIndex - 1);   // Sort left half
        quick_sort(arr, partitionIndex + 1, high);  // Sort right half
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (auto &it : arr) cin >> it;

    quick_sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (auto it : arr) cout << it << " ";
    cout << endl;

    return 0;
}
