import java.util.Scanner;
public class A3q11
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Number : ");
        int x,i,n,s=0,p=1,r=0;
        x=in.nextInt();
        n=x;
        while(n>0)
        {
            r=n%10;
            s=s+r;
            p=p*r;
            n=n/10;
        }
        if(s==p)
        {
            System.out.println("Spy number.");
        }
        else
        {
            System.out.println("Not a spy number.");
        }
    }
}