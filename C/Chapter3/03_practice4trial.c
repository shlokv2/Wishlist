#include<stdio.h>

int main()
{
    // after correction it's working now
    int year, f, z;
    printf("Enter the year\n");
    scanf("%d",&year);
    f=year%4;
    z=year%400;
    if((f==0) ||(z==0))
    {
        printf("The year is a leap year\n");
    }
    else{
        printf("The year is not a leap year\n");
    }
    return 0;
}