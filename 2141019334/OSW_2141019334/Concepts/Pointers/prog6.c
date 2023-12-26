#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int x = 0, flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if (*(ptr + i) == x)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("Element found");
    else
        printf("Element isn't found");
    printf("\n");
    return 0;
}