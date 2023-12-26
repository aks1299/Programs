#include <stdio.h>
int val = 10;
int main(void)
{
    int val = 20;
    {
        extern int val;
        printf("Global var : %d\n", val);
    }
    printf("Local Var : %d\n", val);
    return 0;
}