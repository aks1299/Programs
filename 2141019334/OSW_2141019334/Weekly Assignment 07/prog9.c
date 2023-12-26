#include <stdio.h>

void fun(int *p, int *q)
{
    p = q;
    *q = 10;
}

int main()
{
    int i = 5, j = 5;
    fun(&i, &j);
    printf("The value of i is %d and the value of j is %d\n", i, j);
    return 0;
}