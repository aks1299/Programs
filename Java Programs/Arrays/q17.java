import java.util.*;
class q17
{
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        int a[]=new int[11];
        int i,n,j,max=0,min,fif=0,hun=0,sum=0;
        System.out.println("Enter Number of batsmen.");
        n=in.nextInt();
        for(i=0;i<n;i++)
        {
            System.out.println("Enter Runs Scored.");
            a[i]=in.nextInt();
        }
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        min=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>=50 && a[i]<100)
            {
                fif++;
            }
            if(a[i]>=100)
            {
                hun++;
            }
        }
        System.out.println("Number of batsmen scoring 100+ "+hun);
        System.out.println("Number of batsmen scoring 50+ "+fif);
        System.out.println("Total runs of the Innings."+sum);
        System.out.println("Average runs of the Innings."+(sum/n));
    }
}