import java.util.*;
class mton
{
    public static void power(int m, int n)
    {
        int p,x;
        if(n==2)
        {
            System.out.println(Math.pow(m,2));
        }
        else
        {
            System.out.println(Math.pow(m,n));
        }
    }
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Number : ");
        int a,b;
        a=in.nextInt();
        System.out.println("Enter Power : ");
        b=in.nextInt();
        mton ob=new mton();
        ob.power(a,b);
    }
}