#include<iostream>
#include<fstream>
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
//sort the DLL's
void sort(node *frst)
{
    node *arr[count(frst)];
    node *tmp=frst;
    for(int i=0;i<count(frst);i++)
    {
        arr[i]=tmp;
        tmp=tmp->next;
    }
    for (int i=0;i<count(frst)-1; i++)
    {
        for (int j=0;j<count(frst)-i-1; j++)
        {
            if (arr[j]->num > arr[j + 1]->num) 
            {
                int temp = arr[j]->num;
                arr[j]->num= arr[j+1]->num;
                arr[j + 1]->num=temp;
                node *t=arr[j]->next;
                arr[j]->next=arr[j+1]->next;
                arr[j+1]->next=t;
                node *tem=arr[j]->prev;
                arr[j]->prev=arr[j+1]->prev;
                arr[j+1]->prev=tem;
            }
        }
    }        
}
//display the DLL's
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
int n=count(first);
node *arr1=new node[n];
int v=count(start);
node *arr2=new node[v];
//Assign address of nodes to pointer array
void makearr()
{
    node *lst=first;
    for(int i=0;i<count(first);i++)
    {
        arr1[i]=*lst;
        lst=lst->next;
    }
    node *e=start;
    for(int i=0;i<count(start);i++)
    {
        arr2[i]=*e;
        e=e->next;
    }
}
//Assign the address from pointer array to text file
void assignaddtofile()
{
    ofstream fout("item.txt");
    for(int i=0;i<n;i++)
    {
        add=arr1[i];
        fout.write((char*)&add,sizeof(add));
    }
    fout.close();
}
//Assign the value of text file to String array
void assignaddtostr()
{
    string s[n];
    string w[v];
    ifstream fin("item.txt");
    while(!fin.eof())
    {
        fin.read((char*)&add,sizeof(add));
        //s[cnt++]=add;
    }
}
//convert hexadecimal memory adderss to decimal
int hexadecimalToDecimal(string hex)
{
    int len=hex.size();
    int base=1;
    int dec=0;
    for(int i=len-1;i>=0;i--) 
    {
        if(hex[i]>='0'&&hex[i]<='9') 
        {
            dec+=(int(hex[i])-48)*base;
            base=base*16;
        }
        else if (hex[i]>='a' && hex[i]<='f') 
        {
            dec+=(int(hex[i])-87)*base;
            base=base*16;
        }
    }
    return dec;
}
//add decimal converted addresses to an array a and return the array
void makearra()
{
    for(int i=0;i<count(first);i++)
    {
        //a[i]=hexadecimalToDecimal();
    }
}
//add decimal converted addresses to an array b and return the array
void makearrb()
{
    for(int i=0;i<count(start);i++)
    {
        //b[i]=hexadecimalToDecimal();
    }
}
//finds the address closest to the end node of the first DLL
int findclosest(int a[],int b[])
{
    int x=a[count(first)-1];
    int idx=0; 
    int min=a[count(first)-1]-b[0];
    for(int i=0;i<count(start);i++)
    {
        if(min>(a[count(first)-1]-b[i]))
        {
            min=a[count(first)-1];
            idx=i;
        }
    }
    return idx;
}
//merge the two DLL's
void merge(int a[],int b[])
{
    node *ffirst,*flast,*fcurrent;
    int x=findclosest(a,b);
    current=start;
    for(int i=0;i<x;i++)
    {
        current=current->next;
    }
    node *dummy=new node();
    dummy->num=current->num;
    dummy->prev=current->prev;
    dummy->next=current->next;
    current->prev=last;
    last->next=current;
    dummy->prev->next=NULL;
    en->next=start;
}
int main()
{
    createfirst();
    createsecond();
    disp(first);
    disp(start);
    cout<<count(first);
    cout<<endl;
    cout<<count(start);
    cout<<endl;
    sort(first);
    sort(start);
    makearr();
    //convertaddtostr();
    //merge(makearra(),makearrb());
    assignaddtofile();
    disp(first);
}