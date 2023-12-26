#include <stdio.h>
int main()
{
    int a, b;
    printf("enter two angles");
    scanf("%d %d", &a, &b);
    int c = 180 - (a + b);
    printf("the third angle- %d \n", c);
    return 0;
}