#include <stdio.h>
#include <stdlib.h>

int *fun()
{
    int a = 10, b = 20;
    int sum = 0;
    sum = a + b;
    return &sum;
}

int main()
{
    int *ptr;
    ptr = fun();
    printf("%d\n", *ptr);
    return 0;
}