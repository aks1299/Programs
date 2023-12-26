import java.util.*;
class q22
{
    public static void main(String[] args)
    {
        Scanner in =new Scanner(System.in);
        int n,m,i;
        System.out.println("Enter Number of elements of 1st array");
        n=in.nextInt();
        System.out.println("Enter Number of elements of 2nd array");
        m=in.nextInt();
        int c[]=new int[n+m];
        int a[]=new int[n];
        int b[]=new int[m];
        for(i=0;i<n;i++)
        {
            System.out.println("Enter number for list 1");
            a[i]=in.nextInt();
        }
        for(i=0;i<m;i++)
        {
            System.out.println("Enter number for list 2");
            b[i]=in.nextInt();
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                c[i]=a[i];
            }
        }
        for(i=0;i<m;i++)
        {
            if(b[i]%2!=0)
            {
                c[i]=b[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                c[i]=a[i];
            }
        }
        for(i=0;i<m;i++)
        {
            if(b[i]%2==0)
            {
                c[i]=b[i];
            }
        }
        for(i=0;i<(n+m);i++)
        {
            System.out.println(c[i]);
        }
    }
}