#include <stdio.h>

int main(void)
{
    int n = 0, ctr = 0, rev = 0;
    printf("Enter N : ");
    scanf("%d", &n);
    int m = n;
    while (m > 0)
    {
        int r = m % 10;
        rev = rev * 10 + r;
        m = m / 10;
    }
    printf("The reverse of the number is : %d\n", rev);
    return 0;
}