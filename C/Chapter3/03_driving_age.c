#include<stdio.h>

int main()
{
    int a;
    printf("What's your age?\n");
    scanf("%d",&a);
    if(a<=90){
        printf("You can drive\n");
    }
    else{
        printf("You cannot drive\n");
    }
    return 0;
}