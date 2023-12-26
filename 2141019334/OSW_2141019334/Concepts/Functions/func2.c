#include <stdio.h>
void swap(int a, int b)
{
    printf("before swapping:%d %d \n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("after swapping:%d %d\n", a, b);
}
int main(void)
{
    swap(12, 15);
    return 0;
}