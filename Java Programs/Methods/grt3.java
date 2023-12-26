import java.util.*;
class grt3
{
    public static void greatest(int a,int b, int c)
    {
        if(a>b && a>c)
        {
            System.out.println(a);
        }
        else if(b>a && b>c)
        {
            System.out.println(b);
        }
        else if(c>a && c>b)
        {
            System.out.println(c);
        }
    }
    public static void main(String[] args)
    {
        int n1,n2,n3;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter 1st Number : ");
        n1=in.nextInt();
        System.out.println("Enter 2nd Number : ");
        n2=in.nextInt();
        System.out.println("Enter 3rd Number : ");
        n3=in.nextInt();
        grt3 ob=new grt3();
        ob.greatest(n1,n2,n3);
    }
}