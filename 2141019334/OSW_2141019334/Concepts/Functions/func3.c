#include <stdio.h>

void square(int a)
{

    int s = a * a;
    printf("square number:%d\n", s);
}
int main(void)
{
    square(10);
    return 0;
}