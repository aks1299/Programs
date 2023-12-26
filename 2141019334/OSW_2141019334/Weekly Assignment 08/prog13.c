//Write a program to find the sum of an array elements using recursion.
#include<stdio.h>
int rec_sum(int a[],int n)
{
    if(n <= 0)
    {
        return 0;
    }
    else
    {
        return (rec_sum(a, n - 1) + a[n - 1]);
    }
}
int main()
{
    int sum = 0;
    int arr[] = {1 ,2 ,3 ,4 ,5}; 
    printf("The sum of the elements are : %d\n",rec_sum(arr,5));
    return 0;
}