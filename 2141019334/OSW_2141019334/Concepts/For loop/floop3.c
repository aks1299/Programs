#include <stdio.h>

int main(void)
{
    int n = 0, sum = 0;
    printf("Enter N : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("The Sum of Odds is : %d\n", sum);
}