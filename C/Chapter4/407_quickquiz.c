#include <stdio.h>

int main()
{
    int a = 0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (a = 0; a <= n; a++)
    {
        printf("Natural number till n is %d\n", a);
    }
    return 0;
}