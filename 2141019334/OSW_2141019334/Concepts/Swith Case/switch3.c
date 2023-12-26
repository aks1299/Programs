#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the two numbers : ");
    scanf("%d %d", &a, &b);
    switch (a > b)
    {
    case 0:
        printf("Second");
        break;
    case 1:
        printf("First");
        break;
    default:
        break;
    }
}