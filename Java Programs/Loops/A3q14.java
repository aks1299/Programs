import java.util.Scanner;
public class A3q14
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter range : ");
        int x,i,s=0,r,n;
        x=in.nextInt();
        for(i=1;i<=x;i++)
        {
            n=i;
            while(n>0)
            {
                r=n%10;
                s=s+r;
                n=n/10;
            }
            if((i%s)==0)
            {
                System.out.println(i+"Harshad number");
            }
            else
            {
                System.out.println(i+"Not a harshad number");
            }
            s=0;
        }
    }
}