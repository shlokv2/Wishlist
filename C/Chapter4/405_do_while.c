#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("The value of i is %d\n", i);
        i++;
    } while (i <= 10);

    // executes the code and then checks the condition (exact opposite of while)
    return 0;
}