#include<iostream>
using namespace std;
struct node
{
    int num;
    node *prev,*next;
};
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
void d()
{
    last=first;
    while(last!=NULL)
    {
        cout<<last->num<<" ";
        last=last->next;
    }
}
void insertb()
{
    cout<<endl;
    node *temp=new node();
    cout<<"Enter value : ";
    cin>>temp->num;
    temp->next=first;
    temp->prev=NULL;
    first=temp;
}
void insertl()
{
    cout<<endl;
    node *temp=new node();
    cout<<"Enter value : ";
    cin>>temp->num;
    temp->next=NULL;
    last=first;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    temp->prev=last;
    last->next=temp;
    last=temp;
}
void insertr()
{
    cout<<endl;
    int pos;
    node *temp=new node();
    cout<<"Enter value : ";
    cin>>temp->num;
    cout<<"Enter position at which value is to be Entered : ";
    cin>>pos;
    last=first;
    for(int i=1;i<pos-1;i++)
    {
        last=last->next;
    }
    temp->prev=last;
    temp->next=last->next;
    last->next=temp;
    last->next->prev=temp;    
}
void delb()
{
    cout<<endl;
    node *temp=first;
    first=first->next;
    first->prev=NULL;
    delete temp;
}
void del()
{
    cout<<endl;
    last=first;
    node *temp=last;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last=last->prev;
    last->next=NULL;
    delete temp;
}
void delr()
{
    int pos;
    cout<<endl;
    cout<<"Enter position : ";
    cin>>pos;
    last=first;
    for(int i=1;i<pos-1;i++)
    {
        last=last->next;
    }
    last->next->prev=last->prev;
    last->prev->next=last->next;
}
int main()
{
    create();
    d();
    delb();
    d();
    del();
    d();
    delr();
    d();
}
