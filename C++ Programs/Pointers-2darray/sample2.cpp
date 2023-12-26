#include<iostream>
using namespace std;
int *arr[4][4];
int sort(int a[4][4],int r,int c)
{
    int i,j,k;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=0;k<c-j-1;k++)
            {
                if(*arr[i][k]>*arr[i][k+1])
                {
                    int *t=arr[i][k];
                    arr[i][k]=arr[i][k+1];
                    arr[i][k+1]=t;
                }
            }
        }
    }
    cout<<endl;
}
int main()
{
    int i,j;
    int a[4][4]={{97,72,80,13},
                 {78,31,50,22},
                 {99,57,33,26},
                 {60,38,19,24}};
    //1st assn
    arr[0][0]=&a[0][0];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            arr[i][j]=&a[i][j];
        }
    }
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //2nd assn
    arr[0][0]=&a[0][0];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    sort(a,4,4);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<*arr[i][j]<<" ";
            arr[i][j]++;
        }
        cout<<endl;
    }
}