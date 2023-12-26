#include <stdio.h>

int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int n = 0;
    printf("Enter the nth term : ");
    scanf("%d", &n);
    printf("The Nth term is : %d", fib(n));
    return 0;
}