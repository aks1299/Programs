#include <stdio.h>

int main(void)
{
    int *p;
    int(*ptr)[5];
    int arr[5];
    p = arr;
    ptr = &arr;
    printf("%p\t%ptr\n", p, ptr, *p++, ptr++);
    return 0;
}