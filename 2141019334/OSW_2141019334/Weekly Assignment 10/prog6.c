#include <stdio.h>

int main()
{
    int a[10];
    int *pa;
    pa = a;
    printf("%s", pa);
    pa = &a[0];
    printf("%s", pa);
    pa++;
    printf("%s", pa);
    a = pa;
    printf("%s", a);
    a++;
    return 0;
}