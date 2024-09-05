#include <stdio.h>

int main() {
    int marks;

    // Prompt the user to enter marks
    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);

    // Calculate grade based on marks using switch-case
    switch(marks / 10) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        case 5:
            printf("Grade: E\n");
            break;
        default:
            printf("Grade: F\n");
    }

    return 0;
}
