#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter First Number: ");
    scanf("%d", &a);
     printf("Enter Second Number: ");
    scanf("%d", &b);
     printf("Enter Third Number: ");
    scanf("%d", &c);
     printf("Enter Fourth Number: ");
    scanf("%d", &d);
    // here's a better tip, instead of typing print f and scan f again and again, type like this
    // printf("Enter Four numbers\n");
    // scanf("%c %c %c %c", &a, &b, &c, &d);
    
    if(a>b && a>c && a>d){
        printf("a is the greatest\n");
    }
    else if(b>a && b>c && b>d){
        printf("b is the greatest\n");
    }
    else if(c>a && c>b && c>d){
        printf("c is the greatest\n");
    }
    else if(d>a && d>c && d>b){
        printf("d is the greatest\n");
    }
    
    return 0;
}