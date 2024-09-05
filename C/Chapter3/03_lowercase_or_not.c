#include<stdio.h>

int main()
{
    char ch;
    //97-122=lowercase from ascii table
    printf("Enter the character\n");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122)
    {
        printf("%c is lowercase\n", ch);
    }
    else{
        printf("%c is not lowercase\n", ch);
    }
    return 0;
}