#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = &arr[0];
    printf("%p %d %p\n", p, arr[0], p);
    printf("%p %d %p\n", p, (*p)++, p);
    // printf("%p %d %p\n", p, *p++, p);
    // printf("%p %d %p\n", p, ++*p, p);
    // printf("%p %d %p\n", p, *(p + 4), p);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("%d", *arr);
}