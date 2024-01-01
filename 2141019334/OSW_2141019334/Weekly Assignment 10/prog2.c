#include <stdio.h>

int main()
{
    // Declare and initialize a string using array reference
    char myStringArray[] = "Hello, World!";

    // Declare and initialize a string using pointer
    const char *myStringPointer = "Hello, World!";

    // Print the strings
    printf("String using array reference: %s\n", myStringArray);
    printf("String using pointer: %s\n", myStringPointer);

    return 0;
}
