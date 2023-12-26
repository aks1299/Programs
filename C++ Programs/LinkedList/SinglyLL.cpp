#include<iostream>
using namespace std;
struct node
{
    int num;
    node *next;
};
node *first,*last,*current;
void create()
{
    first=new node();
    first->next=NULL;
    last=first;
    cout<<"Enter Number : ";
    cin>>first->num;
    char ans;
    cout<<"Wish to Continue (y/n) : ";
    cin>>ans;
    while(ans=='y')
    {
        current=new node();
        cout<<"Enter Number : ";
        cin>>current->num;
        current->next=NULL;
        last->next=current;
        last=current;
        cout<<"Wish to Continue (y/n) : ";
        cin>>ans;
    }
}
void display()
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
    current=new node();
    cout<<"Enter value for new Node : ";
    cin>>current->num;
    current->next=first;
    first=current;    
}
void insertl()
{
    cout<<endl;
    node *n=new node();
    cout<<"Enter value of new Node : ";
    cin>>n->num;
    current=first;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=n;
    n->next=NULL;
}
void insertr()
{
    cout<<endl;
    int pos;
    node *n=new node();
    cout<<"Enter value of new Node : ";
    cin>>n->num;
    cout<<"Enter position at which value is to be Entered : ";
    cin>>pos;
    current=first;
    for(int i=1;i<pos-1;i++)
    {
        current=current->next;
    }
    n->next=current->next;
    current->next=n;
}
void deleteb()
{
    cout<<endl;
    node *p=first;
    first=first->next;
    delete p;
}
void deletel()
{
    cout<<endl;
    node *temp=first;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    delete temp;
}
void deleter()
{
    int pos;
    cout<<endl;
    cout<<"Enter the position at which element is to be deleted : ";
    cin>>pos;
    node *temp=first;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    node *p=temp->next;
    temp->next=temp->next->next;
    delete p;
}
int main()
{
    int ch;
    cout<<"Enter Choice : "<<endl;
    cout<<"1-Create Linked List."<<endl;
    cout<<"2-Display Linked List."<<endl;
    cout<<"3-Insert Element at the Start."<<endl;
    cout<<"4-Insert Element at the End."<<endl;
    cout<<"5-Insert Element at ant Position."<<endl;
    cout<<"6-Delete Element at the Start."<<endl;
    cout<<"7-Delete Element at the End."<<endl;
    cout<<"8-Delete Element at ant Position."<<endl;
    cin>>ch;
    while(true)
    {
        if(ch==1)
        {
            create();
        }
        else if(ch==2)
        {
            display();
        }
        else if(ch==3)
        {
            insertb();
        }
        else if(ch==4)
        {
            insertl();
        }
        else if(ch==5)
        {
            insertr();
        }
        else if(ch==6)
        {
            deleteb();
        }
        else if(ch==7)
        {
            deletel();
        }
        else if(ch==9)
        {
            deleter();
        }
        else
        {
            
        }
    }
}