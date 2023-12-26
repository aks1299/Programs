#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int num = 0, hCount = 0, mCount = 0, sCount = 0, hSum = 0, mSum = 0, sSum = 0;
    fptr = fopen("vspeed.txt","r");
    if(fptr == NULL)
    {
        printf("The file could not be opened");
        exit(0);
    }
    else
    {

        printf("The file is now open!\n");
        while(fscanf(fptr,"%d",&num)!=EOF)
        {
            if(num >= 90)
            {
                hSum += num;
                hCount++;
            }
            else if(num >= 50 && num <= 89)
            {
                mSum += num;
                mCount++;
            }
            else if(num < 50)
            {
                sSum += num;
                sCount++;
            }
        }
        printf("High Speed Category Avg. Speed : %d and Number of Vehicles : %d\n",(hSum)/hCount,hCount);
        printf("Medium Speed Category Avg. Speed : %d and Number of Vehicles : %d\n",(mSum)/mCount,mCount);
        printf("Slow Speed Category Avg. Speed : %d and Number of Vehicles : %d\n",(sSum)/sCount,sCount);
    }
    fclose(fptr);
}