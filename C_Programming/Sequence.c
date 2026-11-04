#include<stdio.h>

int main()
{
    int no1 = 0, no2 = 0, Ans = 0;

    printf("Enter first number : \n");
    scanf("%d", &no1);

    printf("Enter second number : \n");
    scanf("%d", &no2);

    Ans = no1 + no2;
    printf("Addition : %d", Ans);

    return 0;
}