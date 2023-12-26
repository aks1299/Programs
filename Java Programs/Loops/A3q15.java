import java.util.Scanner;
public class A3q15{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Decimal number : ");
        int x,n,r,r1,s=0,s1,s2=0;
        x=in.nextInt();
        n=x;
        while(n>0)
        {
            r=n%2;
            s=s*10+r;
            n=n/2;
        }
        s1=s;
        while(s1>0)
        {
            r1=s1%10;
            s2=s2*10+r1;
            s1=s1/10;
        }
        System.out.println("The binary is "+s2);
    }
}