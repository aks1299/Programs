#include <stdio.h>
struct my
{
    float x, y, z;
};
int main()
{
    struct my ob = {6.7, 1.2, 2.7};
    struct my *p = &ob;
    printf("%f %f %f0", p->x, p->y, p->y);
}