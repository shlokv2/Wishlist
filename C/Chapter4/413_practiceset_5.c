#include <stdio.h>

int main()
{
    int i = 1, sum = 0, n = 10;
    // for(i=1;i<=n;i++){
    // sum +=i;
    // }
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The value of first 10 natural numbers is %d", sum);
    return 0;
}