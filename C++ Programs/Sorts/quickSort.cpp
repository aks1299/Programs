#include<iostream>
using namespace std;

int split(int arr[], int lower, int upper)
{
    int pivot, low, high;

    low = lower + 1;
    high = upper;
    pivot = arr[lower];

    while(high >= low)
    {
        while(arr[low] < pivot)
        {
            low++;
        }
        while(arr[high] > pivot)
        {
            high--;
        }
        if(high > low)
        {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    }

    int temp = arr[lower];
    arr[lower] = arr[high];
    arr[high] = temp;
    return high;
}

void quickSort(int arr[], int lower, int upper)
{
    int pivot;
    if(upper > lower)
    {
        pivot = split(arr, lower, upper);
        quickSort(arr, lower, pivot - 1);
        quickSort(arr, pivot + 1, upper);
    }
}

int main()
{
    int arr[] = {11, 2, 9, 13, 57, 25, 17, 1, 90, 3, 99};
    cout<<"Quick Sort\nBefore Sorting : ";
    for(int i = 0; i < 9 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    quickSort(arr, 0, 9);
    cout<<"\nAfter Sorting : ";
    for(int i = 0; i < 9 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}