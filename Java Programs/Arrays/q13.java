import java.util.*;
class q13
{
    public static void main()
    {
        Scanner in= new Scanner(System.in);
        int a[]=new int[5];
        int n,i,j,r,c=0;
        for(i=0;i<5;i++)
        {
            System.out.println("Enter Number :");
            a[i]=in.nextInt();
        }
        for(j=0;j<5;j++)
        {
            n=a[j];
            while(n>0)
            {
                r=n%10;
                c++;
                n=n/10;
            }
            if((n%2==0) && (c%2!=0))
            {
                System.out.println("No."+a[j]);
            }
        }
    }
}