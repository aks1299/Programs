import java.util.*;
public class A3q17
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Number : ");
        int x,i,n,r,c=0;
        x=in.nextInt();
        n=x;
        while(n>0)
        {
            r=n%10;
            if(r==0)
            {
                c++;
            }
            else
            {
                c=0;
            }
            n=n/10;
        }
        if(c>0)
        {
            System.out.println("Duck Number. ");
        }
        else
        {
            System.out.println("Not a duck number. ");
        }
        c=0;
    }
}