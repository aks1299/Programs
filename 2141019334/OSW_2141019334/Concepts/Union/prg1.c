#include <stdio.h>
union un
{
    int mem1;
    char mem2;
    float mem3;
};
int main(void)
{
    union un var1;
    var1.mem1 = 10;
    printf("%d\n", var1.mem1);
    printf("%ld\n", sizeof(var1));
    return 0;
}