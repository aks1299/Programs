#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr = fopen("sample.txt","r");
    int n = 0;char ch ;
    if(fptr == NULL)
    {
        printf("The cannot be opened");
        exit(0);
    }
    else
    {
        while(fscanf(fptr,"%d",n) != EOF)
        {
            printf("%d\n",n);
            while((ch = fgetc(fptr)) != '\n')
            {
                printf("%c",ch);
            }
        }
    }
}