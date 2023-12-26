#include <stdio.h>

int main()
{
    int ctr = 1;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (j <= i)
            {
                printf("%d", ctr++);
            }
        }
        printf("\n");
    }
}