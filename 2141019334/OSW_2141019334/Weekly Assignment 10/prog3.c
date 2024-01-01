#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("The string you entered is: %s\n", str);
    printf("Character\tAddress\n");
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c\t\t%p\n", str[i], &str[i]);
    }
    return 0;
}
