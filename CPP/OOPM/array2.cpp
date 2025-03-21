#include <iostream>
using namespace std;

int main() {
    // Initializing a 2D array (3 rows and 3 columns)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Example 1: Accessing elements in the 2D array
    cout << "Element at (0,0): " << matrix[0][0] << endl;  // Output: 1
    cout << "Element at (2,2): " << matrix[2][2] << endl;  // Output: 9

    // Example 2: Modifying an element in the 2D array
    matrix[1][1] = 10;  // Modifying element at row 1, column 1
    cout << "Modified element at (1,1): " << matrix[1][1] << endl;  // Output: 10

    // Example 3: Traversing the 2D array using nested loops
    cout << "All elements in the 2D array:" << endl;
    for (int i = 0; i < 3; i++) {  // Looping through rows
        for (int j = 0; j < 3; j++) {  // Looping through columns
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Example 4: Summing elements in a 2D array
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];  // Adding each element to sum
        }
    }
    cout << "Sum of all elements: " << sum << endl;  // Output: 51

    // Example 5: Transposing a 2D array
    cout << "Transpose of the 2D array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[j][i] << " ";  // Switching rows and columns
        }
        cout << endl;
    }

    return 0;
}
