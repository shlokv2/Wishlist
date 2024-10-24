#include<stdio.h>

int main()
{
    int i=0, sum=0;
    do{
        sum +=i;
        i++;
        //if you write i++ first then you get 66 as the answer which is wrong!
    }
    while(i<=10);
printf("The sum of first 10 natural nos using do while loop is %d\n", sum);
    return 0;
}
