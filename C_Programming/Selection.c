#include<stdio.h>

int main()
{
    int no1 = 0;

    printf("Enter a number : \n");
    scanf("%d", &no1);

    if(no1 % 2 == 0)
    {
        printf("It is an even number");
    }
    else
    {
        printf("It is an odd number");
    }

    return 0;
}