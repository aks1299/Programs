#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter number a ");
    printf("enter number b ");
    printf("enter number c ");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    printf("sum=%d", sum);
}