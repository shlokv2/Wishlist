#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact = 1;  // Initialize fact to 1, since the factorial of 0 is 1

    // Calculate factorial of n
    for (int i = 1; i <= n; i++) {
        fact *= i;  // Multiply fact by the current value of i
    }

    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}
