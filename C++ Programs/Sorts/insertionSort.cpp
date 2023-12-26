#include<iostream>

using namespace std;

int main()
{
    int k = 0;
    int arr[]={12, 3, 8, 10, 13, 33, 43, 5, 65, 11};
    cout<<"Insertion Sort\nBefore Sorting : ";
    for(int i = 0; i <= 9; i++)
    {
        cout<<arr[i]<<" ";
    } 
    for (int i = 1 ; i <= 9 ; i++ )
    {
        for (int j = 0 ; j < i ; j++ )
        {
            if ( arr[j] > arr[i] )
            {
                int temp = arr[j] ;
                arr[j] = arr[i] ;
                
                for ( k = i ; k > j ; k-- )
                    arr[k] = arr[k - 1] ;

                arr[k + 1] = temp ;
            }
        }
    }
    cout<<"\nAfter Sorting : ";
    for(int i = 0; i <= 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}