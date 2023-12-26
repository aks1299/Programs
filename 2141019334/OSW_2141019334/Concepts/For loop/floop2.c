#include <stdio.h>

int main(void)
{
    int n = 0, sum = 0;
    printf("Enter N : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * i * i;
    }
    printf("The Sum of Cubes is : %d\n", sum);
}