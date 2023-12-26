import java.util.*;
class q27
{
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Number of elements.");
        int n,i,j,k,c=0;
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
            j=a[i];
            for(k=i;k<n;k++)
            {
                if(j==a[k])
                {
                    c++;
                }
            }
            System.out.println(j+" has occured "+c+" times. ");
            c=0;
        }
    }
}