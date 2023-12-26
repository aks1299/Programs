import java.util.*;
class q19
{
    public static void main()
    {
        Scanner in= new Scanner(System.in);
        int n,p=0,rev,s=0,i,c=0;
        int a[]=new int[5];
        System.out.println("Enter Number of elements.");
        n=in.nextInt();
        for(i=0;i<n;i++)
        {
            System.out.println("Enter numbers.");
            a[i]=in.nextInt();
        }
        for(i=0;i<n;i++)
        {
            p=a[i];
            for(i=1;i<p;i++)
            {
                if(p%i==0)
                {
                    c++;
                }
            }
            while(n>0)
            {
                rev=n%10;
                s=s*10+rev;
                n=n/10;
            }
            if(p==s&&c==2)
            {
                System.out.println("Number is PalPrime : "+p);
            }
            else
            {
                System.out.println("Number is not PalPrime : "+p);
            }
        }
    }
}