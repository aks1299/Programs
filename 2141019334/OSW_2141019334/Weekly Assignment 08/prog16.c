// Write a program to remove adjacent duplicate characters from a string using recursion
#include <stdio.h>

// Function to remove adjacent duplicates from a string using recursion
void removeAdjacentDuplicates(char *str)
{
    if (str[0] == '\0')
    {
        return; // Base case: end of string
    }

    if (str[0] == str[1])
    {
        // If current character is equal to the next one, shift characters to the left
        int i = 0;
        while (str[i] != '\0')
        {
            str[i] = str[i + 1];
            i++;
        }
        removeAdjacentDuplicates(str); // Recursively check the modified string
    }
    else
    {
        removeAdjacentDuplicates(str + 1); // Move to the next character
    }
}

int main()
{
    char inputString[100];

    // Taking input from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Original string: %s\n", inputString);

    // Removing adjacent duplicates
    removeAdjacentDuplicates(inputString);

    printf("String after removing adjacent duplicates: %s\n", inputString);

    return 0;
}
