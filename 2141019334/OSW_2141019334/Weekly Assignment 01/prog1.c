#include <stdio.h>

int main(void)
{
    float a = 1.0, b = 2.0, c = 3.0, d = 4.0, exp = 0;
    exp = a - b / c * d;
    printf("The value of the expression is : %f \n", exp);
}