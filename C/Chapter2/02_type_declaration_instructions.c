#include <stdio.h>

int main()
{
    // int a=3; //type declaration instruction
    // int a = 4, b, c; // type declaration instruction
    // b = c = a;
    // printf("The value of a is %d\n", a);
    // printf("The value of b is %d\n", b);
    // printf("The value of c is %d\n", c);
    float a = 1.1;
    float b = a + 8.9;
    // float b=a+8.9;
    // float a=1.1; this won't work since vsc reads code step by step
    printf("The value of b is %f\n", b);
    return 0;
}