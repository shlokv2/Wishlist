#include <stdio.h>

int main()
{
    int num;
    printf("Your number is\n");
    scanf("%d", &num);
    if(num == 1)
    {
        printf("The number is 1\n");
    }
    else if(num == 2)
    {
        printf("The number is 2\n");
    }
    else if(num == 3)
    {
        printf("The number is 3\n");
    }
    else
    {
        printf("The number is not 1, 2, 3 ");
    }
    return 0;
}