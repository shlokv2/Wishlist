#include<stdio.h>

int main()
{
    int radius, height;
    float pi=3.14;
    printf("What is the radius of the cylinder?\n");
    scanf("%d", &radius);
    printf("What is the height of the cylinder?\n");
    scanf("%d", &height);
    printf("The area of this cylinder is %f metres\n", pi*radius*radius*height);
    return 0;
}