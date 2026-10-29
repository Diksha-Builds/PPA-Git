#include<stdio.h>

int main()
{
    int i = 11;
    short int j = 11;
    long int k = 11;

    printf("Size of int : %u\n", sizeof(i));          //4
    printf("Size of short int : %d\n", sizeof(j));    //2
    printf("Size of long int : %d\n", sizeof(k));     //8

    return 0;
}