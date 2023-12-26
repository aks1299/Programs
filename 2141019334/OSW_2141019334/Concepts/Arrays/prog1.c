#include <stdio.h>

int main(void)
{
    int size = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr1[size];
    int arr2[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter Element : ");
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}