import java.io.*;
class circular
{
static int front=0,rear=0,n,i;


public void insert(int a[],int item)
{
if(front==rear+1)
{
System.out.println("Queue Overflow");
}
else if(front==0 && rear == 0)
{
    
    a[rear]=item;
    rear = (rear+1)%n;

}
else
{
rear=(rear+1)%n;
a[rear]=item;
}
}
public void delete()
{
if(front==rear)
{
System.out.println("Queue Underflow");
}
else
{
front=(front+1)%n;
}
}
public void display(int a[])
{
if(front==0 && rear==0)
{
System.out.println("The Queue is Empty");
}
else
{
for(i=front;i<=rear;i++)
{
System.out.println(a[i]);
}
}
}
public static void main()throws IOException
{
InputStreamReader read=new InputStreamReader(System.in);
BufferedReader in=new BufferedReader(read);
circular ob=new circular();
System.out.println("Enter range for the array");
n=Integer.parseInt(in.readLine());
int a[] = new int[n];
int ch,num,f=1;
do
{
System.out.println("*** Menu ****");
System.out.println("1. Insert an item into the Queue");
System.out.println("2. Delete an item from the Queue");
System.out.println("3. Display the Queue");
System.out.print("Enter  your choice : ");
ch=Integer.parseInt(in.readLine());
switch(ch)
{
case 1 :
System.out.print("Enter a number to be inserted : ");
num=Integer.parseInt(in.readLine());
ob.insert(a,num);
break;
case 2 :
ob.delete();
break;
case 3 :
ob.display(a);
break;
default :
System.out.println("Wrong choice");
}
System.out.print("Enter 1 to continue 0 to terminate : ");
f=Integer.parseInt(in.readLine());
}
while(f>0);
}}