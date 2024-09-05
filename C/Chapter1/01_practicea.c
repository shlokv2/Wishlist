#include<stdio.h>

int main()
{
    int length=7, breadth=18;
    //we can do length*breadth in printf instead of area, works either way
    int area=length*breadth;
    printf("The area of the given rectangle is %d\n",area );
    return 0;
}