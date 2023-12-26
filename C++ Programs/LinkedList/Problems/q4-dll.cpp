#include<iostream>
using namespace std;
struct node
{
    int num;
    node *next,*prev;
};
int c,cnt=0,i=1;
node *first,*last,*current;
node *start,*en,*temp,add;
//create fisrt DLL
void createfirst()
{
    first=new node();
    cout<<"Enter Value:";
    cin>>first->num;
    first->next=first->prev=NULL;
    last=first;
    char ans;
    cout<<"Do you want to continue ? ";
    cin>>ans;
    while(ans=='y' || ans=='Y')
    {
        current=new node();
        cout<<"Enter value : ";
        cin>>current->num;
        current->next=NULL;
        current->prev=last;
        last->next=current;
        last=current;
        cout<<"Do you want to continue ? ";
        cin>>ans;
    }
}
int count(node *cnt)
{
    int t=0;
    node *temp=cnt;
    while(temp!=NULL)
    {
        t++;
        temp=temp->next;
    }
    return t;
}
void disp(node *dsp)
{
    node *d=dsp;
    while(d!=NULL)
    {
        cout<<d->num<<" ";
        d=d->next;
    }
    cout<<endl;
}
void interchange()
{
    current=first;
    cout<<first<<endl;
    while(current!=NULL)
    {
        if((i%2)!=0 && current->next!=NULL)
        {
            int t=current->num;
            current->num=current->next->num;
            current->next->num=t;
            node *te=current->next;
            current->next=current->next->next;
            current->next->next=te;
            node *tem=current->prev;
            current->prev=current->next->prev;
            current->next->prev=tem;
        }
        i++;
        current=current->next;
    }
}
int main()
{
    createfirst();
    disp(first);
    interchange();
    disp(first);
}