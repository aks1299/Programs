#include <stdio.h>

int main()
{
    // Declare and initialize a string using array reference
    char str[] = "Hello, World!";

    // Declare and initialize a string using pointer
    const char *strPtr = "Hello, World!";

    // Print the strings
    printf("String using array reference: %s\n", str);
    printf("String using pointer: %s\n", strPtr);

    return 0;
}
