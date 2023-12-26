import java.util.*;
class q25
{
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter number of elements");
        int n,i,j,k,l,c=1,m=0,max=0,ij=0,bc=0;
        n=in.nextInt();
        int a[]=new int[n];
        int b[]=new int[n];
        for(i=0;i<n;i++)
        {
            System.out.println("Enter Element");
            a[i]=in.nextInt();
        }
        for(i=0;i<n;i++)
        {
            j=a[i];
            for(k=1;k<j;k++)
            {
                if(j%k==0)
                {
                    for(l=1;l<=k;i++)
                    {
                        if(n%l==0)
                        {
                            c++;
                        }
                    }
                    if(c==2)
                    {   
                        m++;
                    }
                }
            }
            b[bc]=m;
            m=0;
            bc++;
        }
        for(i=0;i<bc;i++)
        {
            if(b[i]>max)
            {
                max=b[i];
                ij=i;
            }
        }
        System.out.println("Element is"+a[ij]+"Number of prime factors is "+max);
    }
}