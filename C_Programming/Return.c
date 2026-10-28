#include<stdio.h>

void display()
{
    return 11;
}

int main()
{
    int Ret = 0;

    Ret = display();

    printf("%d\n", Ret);

    return 0;
}