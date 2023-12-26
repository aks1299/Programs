#include <stdio.h>

int main(void)
{
    int n = 0, ctr = 0;
    printf("Enter N : ");
    scanf("%d", &n);
    int m = n;
    while (m > 0)
    {
        ctr++;
        m = m / 10;
    }
    printf("The Number of digits are : %d\n", ctr);
    return 0;
}