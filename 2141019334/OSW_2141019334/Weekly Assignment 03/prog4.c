#include <stdio.h>

int main(void)
{
    int n, r = 0, sum = 0;
    printf("Enter The Number : ");
    scanf("%d", &n);
    int m = n;
    while (m > 0)
    {
        r = m % 10;
        sum = sum + r;
        m = m / 10;
    }
    if (sum % 9 == 0)
    {
        printf("The Number %d is divisible by 9\n", n);
    }
    else
    {
        printf("It is not Divisible.\n");
    }
    return 0;
}