#include <stdio.h>
int main()
{
    float min, hours;
    printf("enter the min");
    scanf("%f", &min);
    printf("\n");
    hours = min / 60;
    printf("the hours are %f \n", hours);
}