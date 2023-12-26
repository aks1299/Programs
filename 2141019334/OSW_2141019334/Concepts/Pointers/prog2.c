#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;
    int c = *p1 + *p2;
    printf("%d\n", c);
}