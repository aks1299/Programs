#include <stdio.h>
#define mil 1.609
int main()
{
    double km, miles;
    printf("Enter the value of miles : ");
    scanf("%lf", &miles);
    km = mil * miles;
    printf("kilo : ", km);
}