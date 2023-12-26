#include<iostream>

using namespace std;
void buildHeap(int arr[], int n)
{
    int value, child, parent;
    for(int i = 1; i < n; i++)
    {
        value = arr[i];
        child = i;
        parent = (child - 1) / 2;
        while(child > 0 && arr[parent] < value)
        {
            arr[child] = arr[parent];
            child = parent;
            parent = (child - 1) / 2;
        }
        arr[child] = value;
    }
}

void heapSort(int arr[], int n)
{
    int child, parent, ivalue;
    for(int i = n - 1; i > 0; i--)
    {
        ivalue = arr[i];
        arr[i] = arr[0];
        parent = 0;
        if(i == 1)
            child = -1;
        else    
            child = 1;
        if(i > 2 && arr[2] > arr[1])
            child = 2;
        while(child >= 0 && ivalue < arr[child])
        {
            arr[parent] = arr[child];
            parent = child;
            child = 2 * parent + 1;
            
            if(child + 1 <= i - 1 && arr[child] < arr[child + 1])
                child++;
            if(child > i - 1)
                child = -1;
        }
        arr[parent] = ivalue;
    }
}

int main()
{
    int arr[] = {11, 2, 9, 13, 57, 25, 17, 1, 90, 3};
    cout<<"Heap Sort.\n";
    buildHeap(arr, 10);
    cout<<"Before Sorting : ";
    for(int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    heapSort(arr,10);
    cout<<"\nAfter Sorting : ";
    for(int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
}