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
    if (n == rev)
    {
        printf("The number is a Palindrome.\n");
    }
    else
    {
        printf("The number is not a Palindrome.\n");
    }
    return 0;
}