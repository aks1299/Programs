#include<iostream>
using namespace std;
int main()
{
    int *p,i,j,r,c,k,count=0;
    int a[r][c];
    p=&a[0][0];
    cout<<"Enter Number of Rows : ";
    cin>>r;
    cout<<"Enter Number of Columns : ";
    cin>>c;
    int b[r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter Element : ";
            cin>>*(p+j);
        }
        p=p+c;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=0;k<c-j-1;k++)
            {
                if(*(p+j)<0)
                {
                    count++;
                }
                b[i]=count;
                count=0;
            }
        }
    }
    int max=b[0];
    for(i=0;i<r;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    for(i=0;i<r;i++)
    {
        if(b[i]==max)
        {
            cout<<"The row is : "<<i<<endl;
        }
    }
}