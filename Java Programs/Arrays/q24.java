import java.util.*;
class q24
{
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        int n,i,j,k,r,max=0;
        System.out.println("Enter number of elements: ");
        n=in.nextInt();
        int a[]=new int[n];
        int b[]=new int[n];
        for(i=0;i<n;i++)
        {
            System.out.println("Enter element.");
            a[i]=in.nextInt();
        }
        for(i=0;i<n;i++)
        {
            j=a[i];
            k=j;
            while(k>0)
            {
                r=k%10;
                if(r>max)
                {
                    max=r;
                }
                k=k/10;
            }
            b[i]=max;
            max=0;
        }
        for(i=0;i<n;i++)
        {
            System.out.println(b[i]);
        }
    }
}