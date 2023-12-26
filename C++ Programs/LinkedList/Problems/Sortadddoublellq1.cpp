#include<iostream>
using namespace std;
struct node
{
    int num;
    node *next,*prev;
};
int c,ptr=0;
node *first,*last,*current;
void create()
{
    first=new node();
    cout<<"Enter value : ";
    cin>>first->num;
    first->next=first->prev=NULL;
    last=first;
    char ans;
    cout<<"Do you wish to continue (y/n) : ";
    cin>>ans;
    while(ans=='y')
    {
        current=new node();
        cout<<"Enter value : ";
        cin>>current->num;
        current->next=NULL;
        current->prev=last;
        last->next=current;
        last=current;
        cout<<"Do you wish to continue (y/n) : ";
        cin>>ans;
    }
}
int count()
{
    last=first;
    while(last!=NULL)
    {
        c++;
        last=last->next;
    }
    return c;
}
int main()
{
    create();
    int c=count();
    node *arr[c];
    last=first;
    for(int i=0;i<c;i++)
    {
        arr[i]=last;
        last=last->next;
    }
    for(int i=0;i<c;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    for (int i = 0; i < c - 1; i++)
    {
        for (int j = 0; j < c - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j]->num;
                arr[j]->num= arr[j+1]->num;
                arr[j + 1]->num=temp;
                node *t=arr[j]->next;
                arr[j]->next=arr[j+1]->next;
                arr[j+1]->next=t;
                node *tp=arr[j]->prev;
                arr[j]->prev=arr[j+1]->prev;
                arr[j+1]->prev=tp;
            }
        }
    }
    for(int i=0;i<c;i++)
    {
        cout<<arr[i]<<" ";
    }
}