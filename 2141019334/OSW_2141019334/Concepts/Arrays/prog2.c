#include <stdio.h>

int main(void)
{
    int size, dupCount = 0, count = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 0)
        {
            dupCount++;
        }
        count = 0;
    }
    printf("The number of duplicates are : %d", dupCount);
}