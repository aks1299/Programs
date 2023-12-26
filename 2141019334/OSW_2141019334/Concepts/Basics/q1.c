#include <stdio.h>
int main()
{
    int principal, rate, time, result;
    printf("Enter the Principal Amount: ");
    scanf("%d", &principal);
    printf("\n");
    printf("Enter Rate of Interest : ");
    scanf("%d", &rate);
    printf("\n");
    printf("Enter Time Period in Years:");
    scanf("%d", &time);
    result = (principal * rate * time) / 100;
    printf("\n the result is %d \n", result);
}
