#include<stdio.h>

int main()
{
    int i=0,n,factorial=1;
    printf("Enter a Number\n");
    scanf("%d",&n);
    while (i<n)
    /*if you put i<=n here then 4 factorial 
    comes out to be 120 which is the factorial of 5 and not 4 */
    {
      i++;
      factorial*=i;
    }
    printf("The factorial of %d is %d\n",n,factorial);
    return 0;
}