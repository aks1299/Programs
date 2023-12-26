#include <stdio.h>

int main()
{
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = a;
    printf("%d\n", *p);
    printf("%p %d %p %d %d\n", p, (*p)++, p, *p++, *++p);
    q = p + 3;
    printf("%d\n", *q - 3);
    printf("%d\n", *--p + 5);
    printf("%d\n", *p + *q);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
}