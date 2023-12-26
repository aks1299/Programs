#include <stdio.h>

int main(void)
{
    int n, m, max = 0;
    printf("Enter the two numbers : ");
    scanf("%d %d", &n, &m);
    if (m > n)
    {
        max = m;
    }
    else
    {
        max = n;
    }
    for (int i = 0; i < max; i++)
    {
    }
    return 0;
}