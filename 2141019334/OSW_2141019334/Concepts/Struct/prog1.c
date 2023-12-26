#include <stdio.h>

struct d1
{
    int x, y;
};

int main(void)
{
    struct d1 ob1 = {.x = 2, .y = 3};
    struct d1 ob2 = {.x = 2, .y = 3};
    printf("x : %d \t y : %d\n", (ob1.x + ob2.x), (ob1.y + ob2.y));
    return 0;
}