#include<stdio.h>

int main()
{
    int i, sum=0,n=8;
    for(i=0;i<=10;i++){ 
        sum+=i*n; 
    }
    // sum+=i*n;
printf("Sum %d\n", sum);
    return 0;
}