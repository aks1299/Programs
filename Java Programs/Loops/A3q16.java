import java.util.Scanner;
public class A3q16
{

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter number in binary : ");
        int x,n,s,r,c=0,y=0;
        x=in.nextInt();
        n=x;
        while(n>0)
        {
            r=n%10;
            c++;
            if(r==1)
            {
                y=y+(int)Math.pow(2,c);
            }
            n=n/10;
        }
    }
}