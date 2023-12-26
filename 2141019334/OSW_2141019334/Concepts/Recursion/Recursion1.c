#include <stdio.h>
int fact(int);
int main(void)
{
    int x, n;
    printf("Enter No : \n");
    scanf("%d", &n);
    x = fact(n);
    printf("Fact : %d\n", x);
}
int fact(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return (a * fact(a - 1));
    }
}