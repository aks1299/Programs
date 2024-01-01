// Write a recursive function that takes n words as input and print them in reverse order on separate lines. The prototype of the function should be as follows:
#include <stdio.h>

// Function to print words in reverse order
void printWordsReverse(int n)
{
    char word[100];

    // Base case: when n becomes 0
    if (n == 0)
    {
        return;
    }

    // Read the word
    scanf("%s", word);

    // Recursive call for the remaining words
    printWordsReverse(n - 1);

    // Print the word in reverse order
    printf("%s\n", word);
}

int main()
{
    int n;

    // Taking input from the user
    printf("Enter the number of words: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative value for the number of words.\n");
    }
    else
    {
        printf("Enter %d words, separated by spaces:\n", n);

        // Call the recursive function to print words in reverse order
        printWordsReverse(n);
    }

    return 0;
}
