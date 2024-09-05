
#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Simple Calculator\n");
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any whitespace characters.

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
                return 1; // Exit with an error code
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Exit with an error code
    }

    printf("Result: %lf\n", result);

    return 0;
}
