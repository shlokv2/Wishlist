#include <stdio.h>
#include <math.h>
int main()
{
    int a = 4;
    int b = 8;
    printf("the value of a + b is %d\n", a + b);
    printf("the value of a - b is %d\n", a - b);
    printf("the value of a * b is %d\n", a * b);
    printf("the value of a / b is %d\n", a / b);

    int z;
    z = b * a; // legal
    // b*a=z; illegal
    printf("the value of z is %d\n", z);

    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);//wont work if you put %f
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2);

    // no operator is assumed to be present
    // printf("the value of 4*6 is %d\n", (4)(6));-->will not return any value/ wrong!
    printf("the value of 4*6 is %d\n", (4) * (6)); // will work

    // there is no operator to perform exponents in c
    // printf("the value of 2^5 is %d\n", 2^5);-->will not produce 32
    // must put #include<math.h> and%f before doing exponents
    printf("the value of 2^5 is %f\n", pow(2, 5));

    printf("the value of 6+5 is %d\n", 6 + 5);
    printf("the value of 5.71 + 5 is %f\n", 5.71 + 5);
    printf("the value of 5.71 + 5.29 is %f\n", 5.71 + 5.29);
    printf("the value of 5/2 is %d\n", 5 / 2);
    printf("the value of 3.0/9 is %f\n", 3.0 / 9);
    return 0;
}