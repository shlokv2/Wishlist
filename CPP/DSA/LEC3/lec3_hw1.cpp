// SUM OF ALL NUMBERS FROM 1 TO N WHICH ARE DIVISIBLE BY 3
#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    // Input the value of N
    cout << "Enter the value of N: ";
    cin >> N;

    // Calculate the sum of all numbers from 1 to N divisible by 3
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    // Print the result
    cout << "The sum of all numbers from 1 to " << N << " divisible by 3 is: " << sum << endl;

    return 0;
}
