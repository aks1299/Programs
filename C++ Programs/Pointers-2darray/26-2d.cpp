#include<iostream>
using namespace std;
int rfact(int x)
{
    int i,count=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int cnum,cterm,cloop=1;
    int r,c,i,j;
    cout<<"Enter Number of rows : ";
    cin>>r;
    cout<<"Enter Number of Columns : ";
    cin>>c;
    int a[r][c];
    while(cloop==1)
    {
        if(rfact(cterm)<=2)
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    a[i][j]=cterm;
                }
                cout<<endl;
            }
            cterm++;
            cnum++;
        }
        if(cnum>r*c)
        {
            cloop=0;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}