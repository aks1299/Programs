#include <stdio.h>

void insertionSort(int arr[], int n, int m)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < (n + m); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n = 0, m = 0;
    printf("Enter n and m : ");
    scanf("%d %d", &n, &m);
    int arr[n];
    int brr[m];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array 1 element : ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("Enter array 2 element : ");
        scanf("%d", &brr[i]);
    }
    int crr[n + m];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        crr[i] = arr[i];
    }
    for (i = i; i < (n + m); i++)
    {
        crr[i] = brr[i - n];
    }
    insertionSort(crr, n, m);
}