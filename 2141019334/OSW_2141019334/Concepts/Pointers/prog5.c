#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int brr[5];
    int *ptr2 = brr;
    for (int i = 0; i < 5; i++)
    {
        *(ptr2 + i) = *(ptr + i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr2 + i));
    }
    printf("\n");
    return 0;
}