import java.util.*;
class pattern
{
    public static void patt1(int n)
    {
        for(int i=n;i>=1;i--)
        {
            for(int j=i;j>=1;j--)
            {
                System.out.print(n);
            }
            System.out.println();
        }
    }
    public static void patt2(int l)
    {
        for(int i=1;i<=l;i++)
        {
            for(int j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void patt3(int m)
    {
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=i;j++)
            {
                System.out.print(j);
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        Scanner in=new Scanner (System.in);
        System.out.println("Enter Range for pattern 1 : ");
        int a=in.nextInt();
        System.out.println("Enter Range for pattern 2 : ");
        int b=in.nextInt();
        System.out.println("Enter Range for pattern 3 : ");
        int c=in.nextInt();
        pattern ob=new pattern();
        ob.patt1(a);
        ob.patt2(b);
        ob.patt3(c);
    }
}