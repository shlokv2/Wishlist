#include <stdio.h>

int main()
{
    float celsius;
    // if i put float far; here
    //  then far will have 2 values which will show error
    printf("The temperature in celsius is\n");
    scanf("%f", &celsius);
    // the value of celsius will be inputed by the user after this so only after all these lines will the far fn work
    float far = (celsius * 9 / 5) + 32;
    printf("The temperature in °F is %f °F\n", far);
   
    return 0;
}