class pattern
{
public static void main(String args[])
{
int i,j,k,s;
for(i=5;i>=1;i--)
{
for(s=5;s>i;s--)
{
System.out.print(" ");
}
for(j=i;j>=1;j--)
{
System.out.print(j);
}
for(k=2;k<=i;k++)
{
System.out.print(k);
}
System.out.println();
}
}
}
