#include <stdio.h>
#define pi 3.14
int main()
{
    int radius, vol;
    printf("Enter the Radius of a sphere: ");
    scanf("%d", &radius);
    vol = (4 / 3) * (pi * (radius * radius * radius));
    printf("\nVolume = %d \n", vol);
}
