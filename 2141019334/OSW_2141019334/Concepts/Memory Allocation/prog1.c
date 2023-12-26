#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;
    printf("Enter the number of elements you want in your array: \n");
    scanf("%d", &n);
    ptr = (int *)malloc(sizeof(int) * n);
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Memory Successfully allocated\n");
        for (i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }
        printf("The elements of the array are.\n");
        for (i = 0; i < n; ++i)
        {
            printf("%d ", ptr[i]);
        }
    }
    return 0;
}