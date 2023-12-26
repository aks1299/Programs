#include<iostream>
using namespace std;
struct node
{
    int num;
    node *next,*prev;
};
int c,cnt=0;
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
//create second DLL
void createsecond()
{
    start=new node();
    cout<<"Enter Value:";
    cin>>start->num;
    start->next=start->prev=NULL;
    en=start;
    char ans;
    cout<<"Do you want to continue ? ";
    cin>>ans;
    while(ans=='y' || ans=='Y')
    {
        temp=new node();
        cout<<"Enter value : ";
        cin>>temp->num;
        temp->next=NULL;
        temp->prev=en;
        en->next=temp;
        en=temp;
        cout<<"Do you want to continue ? ";
        cin>>ans;
    }
}
//count nodes
int count(node *fst)
{
    node *t=fst;int c=0;
    while(t!=NULL)
    {
        c++;
        t=t->next;
    }
    return c;
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
void merge(int d)
{
    current=first;
    for(int i=0;i<d;i++)
    {
        current=current->next;
    }
    en->next=current->next;
    current->next->prev=en;
    current->prev->next=start;
    start->prev=current->prev;
    disp(first);
}
int main()
{
    int del;
    createfirst();
    createsecond();
    cout<<"Enter the node to be deleted : ";
    cin>>del;
    disp(first);
    disp(start);
    merge(del-1);
}