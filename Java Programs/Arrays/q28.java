import java.util.*;
class q28
{
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Number of elements.");
        int n,i,j,k,c=0,t=0,dc=0;
        n=in.nextInt();
        int a[]=new int[n];
        int d[]=new int[n];
        int b[]=new int[n];
        for(i=0;i<n;i++)
        {
            System.out.println("Enter element");
            a[i]=in.nextInt();
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                   t = a[i];
                   a[i] = a[j];
                   a[j] = t;
                }
            }
        }
        c=1;
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                c++;
            }
            else
            {
                b[dc]=c;
                d[dc]=a[i];
                c=1;
                dc++;
                
            }
        }
        for(i=0;i<dc-1;i++)
        {
            for(j=i+1;j<dc;j++)
            {
                if(b[i]>b[j])
                {
                   t = b[i];
                   b[i] = b[j];
                   b[j] = t;
                   t = d[i];
                   d[i] = d[j];
                   d[j] = t;
                }
            }
        }
        for(i=0;i<dc;i++)
        {
            System.out.println(d[i] +" = "+ b[i]);
        }
    }
}