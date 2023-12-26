import java.util.*;
class q18
{
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        int a[]=new int[5];
        int i,n=0,r,s=0;
        for(i=0;i<5;i++)
        {
            System.out.println("Enter Number.");
            a[i]=in.nextInt();
        }
        for(i=0;i<5;i++)
        {
            n=a[i];
            while(n>0)
            {
               r=n%10;
               s=s*10+r;
               n=n/10;
            }
            a[i]=s;
            System.out.println(a[i]);
            s=0;
        }
        
    }
}