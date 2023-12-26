#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n = 5, i = 0;
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
        print("Memory allocated succesfully");
    }
}