#include <stdio.h>

int main()
{
    int i=0, n, factorial=1;
    printf("Enter any number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
         factorial *= i;
    }
   
    printf("The factorial of %d is %d\n",n, factorial);
    return 0;
}
