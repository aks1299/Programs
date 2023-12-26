import java.util.Scanner;
public class A3q12
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter number : ");
        int x,i,n,r,s=0;
        x=in.nextInt();
        n=x;
        while(n>0)
        {
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
        if(s==x)
        {
            System.out.println("Pailndrome");
        }
        else
        {
            System.out.println("Not a palindrome");
        }
    }
}