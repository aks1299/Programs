#include <stdio.h>

int main()
{
    float centi, fah;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &centi);
    printf("\nThe equivalent temprature is %0.2f Fahrenheit \n", (9 * centi / 5) + 32);
    return 0;
}
