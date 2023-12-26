#include <stdio.h>

void arraySum(int arr[], int brr[], int n, int m)
{
    if (n != m)
    {
        printf("Array sizes do not match cannot merge.");
    }
    else
    {
        int crr[n];
        for (int i = 0; i < n; i++)
        {
            printf("Enter array 1 element : ");
            scanf("%d", &arr[i]);
            printf("Enter array 2 element : ");
            scanf("%d", &brr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            crr[i] = arr[i] + brr[i];
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", crr[i]);
        }
        printf("\n");
    }
}

int main()
{
    int n = 0, m = 0;
    printf("Enter size of 1st and 2nd Array : ");
    scanf("%d", &n);
    int arr[n];
    int brr[n];
    arraySum(arr, brr, n, n);
}