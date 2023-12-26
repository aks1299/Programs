import java.util.Scanner;
class raise
{
    public static int power(int a, int b)
    {
        return(int)(Math.pow(a,b));
    }
    public static void main(String[] args)
    {
        int x,n,r;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Number : ");
        x=in.nextInt();
        System.out.println("Enter Power : ");
        n=in.nextInt();
        raise ob=new raise();
        r=ob.power(x,n);
        System.out.println(r);
    }
}