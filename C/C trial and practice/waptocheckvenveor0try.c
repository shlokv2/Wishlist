#include <stdio.h>

int main()
{
    // Write a C program to check whether a number is negative, positive or zero.
    int a;
    int positive, negative, zero;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    positive = a % 2;
    zero=a/a;
    if (positive = 0)
    {
        printf("%d is positive \n", a);
    }
    else if (!(positive == 0))
    {
        printf("%d is negative \n", a);
    }
    else
    {
        printf("%d is zero \n", a);
    }
    return 0;
}