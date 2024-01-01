#include <stdio.h>

int main()
{
    char str[] = "IBCS";
    char str2[] = "SOADU";
    printf("%s %p\n%s %p", str, &str, str2, &str2);
    return 0;
}