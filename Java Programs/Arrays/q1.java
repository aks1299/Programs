package Arrays;

import java.util.*;
public class q1
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Number of elements.");
        int r,x,n,i,j;
        r=in.nextInt();
        int a[]=new int[r];
        for(i=0;i<r;i++)
        {
            System.out.println("Enter number;");
            a[i]=in.nextInt();
        }
        for(j=(r-1);j>-1;j--)
        {
            System.out.print(a[j]+" ");
        }
    }
}