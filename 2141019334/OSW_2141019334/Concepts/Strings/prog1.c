#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "Aman Kumar Singh";
    int ctr = 0;
    while (s[ctr] != '\0')
    {
        ctr++;
    }
    printf("%d\n", ctr);
}