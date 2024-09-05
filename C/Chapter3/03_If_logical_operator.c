#include<stdio.h>

int main()
{
    int age;
    int emergency=0;
    // emergency=1;
    printf("What's your age?\n");
    scanf("%d",&age);
    if((age<=90 && age>=18)||emergency==1){
    // if((age<=90 && age>=18)||!(emergency==1)){
        printf("You are above 18 and below 90, You can drive\n");
    }
    else{
        printf("You cannot drive\n");
    }
    return 0;
}