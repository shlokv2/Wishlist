#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    while (a<10) //a=11;
     //(a>10) these two lines will lead to an infinite loop
    {
        printf("%d\n", a);//a++;
        a++;
    }
    //checks the condition and then executes the code
    return 0;
}