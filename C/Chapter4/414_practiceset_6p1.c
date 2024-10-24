#include <stdio.h>

int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first 10 natural numbers using for loop is %d\n", sum);
    return 0;
}
