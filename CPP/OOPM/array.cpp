#include <iostream>
using namespace std;

int main() {
    // Declaring and initializing a 1D array
    int arr[5] = {10, 20, 30, 40, 50};

    // Accessing elements
    cout << "First element: " << arr[0] << endl;
    cout << "Third element: " << arr[2] << endl;

    // Modifying an element
    arr[1] = 25;

    // Traversing the array
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2D array example
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    cout << "2D Array element at (1,2): " << matrix[1][2] << endl;  // Outputs 6
    
    return 0;
}
