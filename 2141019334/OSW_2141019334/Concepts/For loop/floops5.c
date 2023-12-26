#include <stdio.h>

int main(void)
{
    int n = 0, sum = 0;
    printf("Enter N : ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
}