import java.util.Scanner;
public class A3q13
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Number.");
        int x,i,n,r,f=1,s=0;
        x=in.nextInt();
        n=x;
        while(n>0)
        {
            r=n%10;
            for(i=1;i<=r;i++)
            {
                f=f*i;
            }
            s=s+f;
            n=n/10;
            f=1;
        }
        if(s==x)
        {
            System.out.println("Special Number ");
        }
        else
        {
            System.out.println("Not a special number");
        }
    }
}