#include<iostream>
using namespace std;
int findmax(int arr[], int size)
{
    int max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            arr[i] = -1000000;
        }
    }
    return max;
}
int findmin(int arr[], int size)
{
    int min = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
            arr[i] = -100000;
        }
    }
    return min;
}
int main()
{
    int arr[] = {12, 43, 45, 22, 54, 78, 44, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int arr1[size];
    int mid = size/2;
    for (int i = 0; i < (size - 1); i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] <  arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    arr1[mid] = arr[0];
    for(int i = 1; i < size; i++)
    {
        if((i % 2) != 0)
        {
            arr1[mid+i] = arr[i];
        }
        else
        {
            arr1[mid-i] = arr[i];
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}