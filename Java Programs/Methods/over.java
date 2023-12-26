import java.util.Scanner;
class over
{
    public static void sq(double a)
    {
        System.out.println(Math.pow(a,2));
    }
    public static void sq(int a)
    {
        System.out.println(a*a);
    }
    public static void sq(char a)
    {
        System.out.println("Square of character is not possible.");
    }
    public static void main(String[] args)
    {
        int a;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Number : ");
        a=in.nextInt();
        over ob=new over();
        ob.sq(a);
        ob.sq(5.5);
        ob.sq('9');
    }
}