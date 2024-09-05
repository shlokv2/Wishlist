#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    printf("Enter marks scored in Physics\n");
    scanf("%d", &physics);
    printf("Enter marks scored in Chemistry\n");
    scanf("%d", &chemistry);
    printf("Enter marks scored in Maths\n");
    scanf("%d", &maths);
    total = (physics + chemistry + maths) / 3;

    if ((total < 40) || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("Your percentage is %f and you have failed\n", total);
    }
    else
    {
        printf("Your percentage is %f and you have passed\n", total);
    }
    return 0;
}