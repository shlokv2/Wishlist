#include <stdio.h>

int main()
{
    // wap to print first n natural numbers using do while
    // input : 4
    // output : 1 2 3 4

    int i = 0;
    int m;
    printf("Enter the value of m\n");
    scanf("%d", &m);
    do
    {
        printf("The value of i : %d\n", i + 1);
        i++;
    } while (i < m);
    return 0;
}