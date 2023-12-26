import java.util.*;
class q26
{
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Number of elements.");
        int n,i,j,k,t,bc=0;
        n=in.nextInt();
        int a[]=new int[n];
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
        for(i=0;i<n-1;i++)
        {
             if(a[i]!=a[i+1])
             {
                 b[bc]=a[i];
                 bc++;
             }
        }
        for(i=0;i<=bc;i++)
        {
            a[i]=b[i];
        }
        for(i=0;i<=bc;i++)
        {
            System.out.println(a[i]+" ");
        }
    }
}