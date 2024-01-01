// Write a program to print the binary equivalent of a Decimal number using recursion.
#include <stdio.h>

void decimalToBinary(int decimal)
{
    if (decimal > 1)
    {
        decimalToBinary(decimal / 2);
    }
    printf("%d", decimal % 2);
}

int main()
{
    int decimalNumber;

    // Taking input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Checking if the input is a non-negative integer
    if (decimalNumber < 0)
    {
        printf("Please enter a non-negative integer.\n");
    }
    else
    {
        printf("Binary equivalent: ");
        decimalToBinary(decimalNumber);
        printf("\n");
    }

    return 0;
}
