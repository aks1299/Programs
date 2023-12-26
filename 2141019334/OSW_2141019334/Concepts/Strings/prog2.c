#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    printf("%p\n", p);
    return 0;
}