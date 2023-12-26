#include<iostream>
using namespace std;

int main()
{
    int size = 0;
    cout<<"Enter Size of the array : ";
    cin>>size;
    string arr[size];
    for(int i = 0;i < size;i++)
    {
        cout<<"Enter the sentence : "<<endl;
        cin>>arr[i];
    }
    for(int i = 0;i < (size - 1); i++)
    {
        for(int  j = 0; j < size - i - 1; j++)
        {
            if(arr[j].length() > arr[j+1].length())
            {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }    
    }
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<",";
    }
}