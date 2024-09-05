#include<stdio.h>

int main()
{
     int a=5, b=5;
     printf("The value after a++ is %d\n", a++);
     printf("The value of a is %d\n", a);
     // notice how the value of a is 5 in a++ and a is 6
     // a++ is first print a then increment a


     printf("The value after b is %d\n", ++b);
     printf("The value of b is %d\n", b);
     // notice how the value of b is 6 in ++b and b is 6
     // ++b is first increment b then print b
     a+=10;

     printf("The value of a is %d\n", a);
     // i+=10 increments the value of i by 10
     //similarly i-+ i*= i/= i%= also work
    return 0;
}