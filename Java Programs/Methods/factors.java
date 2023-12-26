import java.util.*;
class factors
{
    public static void fact(int n)
    {
        int i;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                System.out.println(i);
            }
        }
    }
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        int num;
        System.out.println("Enter any number : ");
        num=in.nextInt();
        factors ob=new factors();
        ob.fact(num);
    }
}