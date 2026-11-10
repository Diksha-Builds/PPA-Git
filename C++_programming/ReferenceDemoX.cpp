#include<iostream>
using namespace std;

int main()
{
    // We can create one reference to one variable
    int no = 11;
    int &x = no;

    // We can create multiple references for a single variable
    int &y = no;

    // We can create refrence to reference 
    int &z = y;

    // We can create reference to pointer
    int *p = &no;
    int *(&q) = p;

    return 0;
}