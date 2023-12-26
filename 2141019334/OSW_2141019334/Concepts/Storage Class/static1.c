#include <stdio.h>

void increment(void);
int main(void)
{
    increment();
    increment();
    increment();
}
void increment(void)
{
    static int i = 1;
    printf("%d\n", i);
    i = i + 1;
}