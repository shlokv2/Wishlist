#include <stdio.h>

int main()
{
    // Write a C program to check whether a number is negative, positive or zero.
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
   
    if (a > 0)
    {
        printf("%d is positive \n", a);
    }
    else if (a<0)
    {
        printf("%d is negative \n", a);
    }
    else if (a==0)
    {
        printf("%d is zero \n", a);
    }
    return 0;
}