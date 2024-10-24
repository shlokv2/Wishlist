#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks obtained\n");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("Your grade is A\n");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Your grade is B\n");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Your grade is C\n");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Your grade is D\n");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Your grade is E\n");
    }
    else if (marks <= 50)
    {
        printf("You didn't make it this year\n");
    }
    else if (marks >= 100)
    {
        printf("Maximum marks can be 100\n");
    }
    return 0;
}
// try with swtich case,might not work since it might not be able to take logical operators(assumption)