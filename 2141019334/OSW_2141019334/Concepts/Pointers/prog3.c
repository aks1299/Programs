#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;
    printf("%d %d \n", *p1, *p2);
    int c = *p1;
    *p1 = *p2;
    *p2 = c;
    printf("%d %d \n", *p1, *p2);
}