#include <stdio.h>

int main() {
    // Prime Numbers = A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers.
    // Disclaimer: This is not the best method to solve this problem

    int n = 2; // Number to check
    int prime = 1; // Assume the number is prime initially

    printf("Enter a number: ");
    scanf("%d", &n); // Read user input

    if (n <= 1) {
        prime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 0; // Number is divisible by i, so it's not a prime
                break;
            }
        }
    }

    if (prime == 0) {
        printf("%d is not a prime number.\n", n);
    } else {
        printf("%d is a prime number.\n", n);
    }

    return 0;
}
